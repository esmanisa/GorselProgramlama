#include "server.h"

Server::Server(QObject *parent) : QTcpServer(parent)
{

}

int Server::count()
{
    return m_list.count();
}

void Server::close()
{
    foreach (QTcpSocket *socket, m_list)
    {
        socket->close();
    }
    qDeleteAll(m_list);
    m_list.clear();

    emit changed(); //slotları kapatmak için
}

QString Server::message() const
{

}

void Server::setMessage(const QString &message)
{
    m_message= message;
}

void Server::disConnected()
{
    QTcpSocket *socket = qobject_cast<QTcpSocket*>(sender());
    if (!socket) return;
    m_list.removeAll(socket);

    disconnect(socket, &QTcpSocket::disconnected, this, &Server::disConnected);
    disconnect(socket, &QTcpSocket::readyRead, this, &Server::readyToRead);
    socket->deleteLater();
    emit changed();
}

void Server::readyToRead()
{
    QTcpSocket *socket = qobject_cast<QTcpSocket*>(sender());
    if (!socket) return;
    QByteArray data = socket->readAll();
    foreach (QTcpSocket *socket, m_list)
    {
        socket->write(data);
    }
}

void Server::incomingConnection(qintptr handle)
{
    QTcpSocket *socket=new QTcpSocket();
    socket->setSocketDescriptor(handle);

    if(!socket->waitForConnected(3000))
    {
        delete socket;
        return;
    }
    m_list.append(socket);
    connect(socket, &QTcpSocket::disconnected, this, &Server::disConnected);
    connect(socket, &QTcpSocket::readyRead, this, &Server::readyToRead);
    emit changed();
    socket->write(m_message.toLatin1());
}
