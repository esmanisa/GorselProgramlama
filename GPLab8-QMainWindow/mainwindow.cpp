#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->plainTextEdit); //plain texti pencere boyutu kadar ayarlamak için atadık.
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    ui->plainTextEdit->clear();
    ui->statusbar->showMessage("New File");
}

void MainWindow::on_actionOpen_triggered()
{
    QString path=QFileDialog::getOpenFileName(this, "Open a File");
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::critical(this, "ERROR!", file.errorString());
        return;
    }
    QTextStream stream(&file);
    ui->plainTextEdit->setPlainText(stream.readAll());
    file.close();
    ui->statusbar->showMessage(path);
}

void MainWindow::on_actionSave_triggered()
{
    QString path=QFileDialog::getSaveFileName(this, "Save File");
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::critical(this, "ERROR!", file.errorString());
        return;
    }

    QTextStream stream(&file);
    stream << ui->plainTextEdit->toPlainText();
    file.close();
    ui->statusbar->showMessage(path);
}

void MainWindow::on_actionSave_As_triggered()
{

}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->plainTextEdit->copy();
}

void MainWindow::on_actionCut_triggered()
{
    ui->plainTextEdit->cut();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->plainTextEdit->paste();
}

void MainWindow::on_actionSelect_All_triggered()
{
    ui->plainTextEdit->selectAll();
}

void MainWindow::on_actionSelect_None_triggered()
{
    QTextCursor cursor=ui->plainTextEdit->textCursor();
    int position = cursor.position();
    cursor.clearSelection();
    cursor.setPosition(position, QTextCursor::MoveMode::KeepAnchor);
    ui->plainTextEdit->setTextCursor(cursor);
}

void MainWindow::on_actionToolbar_Top_triggered()
{
    addToolBar(Qt::ToolBarArea::TopToolBarArea, ui->toolBar);
}

void MainWindow::on_actionToolbar_Bottom_triggered()
{
    addToolBar(Qt::ToolBarArea::BottomToolBarArea, ui->toolBar);
}

void MainWindow::on_actionToolbar_Left_triggered()
{
    addToolBar(Qt::ToolBarArea::LeftToolBarArea, ui->toolBar);
}

void MainWindow::on_actionToolbar_Right_triggered()
{
    addToolBar(Qt::ToolBarArea::RightToolBarArea, ui->toolBar);
}

void MainWindow::on_actionToolbar_Floatable_toggled(bool arg1)
{
    ui->toolBar->setFloatable(arg1);
}

void MainWindow::on_actionToolbar_Movable_toggled(bool arg1)
{
    ui->toolBar->setMovable(arg1);
}
