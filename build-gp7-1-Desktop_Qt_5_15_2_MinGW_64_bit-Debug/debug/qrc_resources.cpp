/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.15.2
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // C:/Users/user/Desktop/BELGE/Ders/2-2/G�RSEL PROGRAMLAMA/Projects/GPDersi-7-1/metinFile/sozlesme.txt
  0x0,0x0,0x0,0x1b,
  0x64,
  0x65,0x72,0x73,0x74,0x65,0x20,0x4c,0x69,0x73,0x61,0x6e,0x73,0x20,0x53,0x6f,0x7a,
  0x6c,0x65,0x6d,0x73,0x65,0x73,0x69,0xa,0x2e,0x2e,
  
};

static const unsigned char qt_resource_name[] = {
  // sozlesme
  0x0,0x8,
  0x7,0x12,0xc9,0x75,
  0x0,0x73,
  0x0,0x6f,0x0,0x7a,0x0,0x6c,0x0,0x65,0x0,0x73,0x0,0x6d,0x0,0x65,
    // metinFile
  0x0,0x9,
  0xb,0x2,0x2b,0xa5,
  0x0,0x6d,
  0x0,0x65,0x0,0x74,0x0,0x69,0x0,0x6e,0x0,0x46,0x0,0x69,0x0,0x6c,0x0,0x65,
    // sozlesme.txt
  0x0,0xc,
  0x9,0x7a,0x7e,0x74,
  0x0,0x73,
  0x0,0x6f,0x0,0x7a,0x0,0x6c,0x0,0x65,0x0,0x73,0x0,0x6d,0x0,0x65,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/sozlesme
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/sozlesme/metinFile
  0x0,0x0,0x0,0x16,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x3,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/sozlesme/metinFile/sozlesme.txt
  0x0,0x0,0x0,0x2e,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x78,0xab,0xf4,0x92,0xa8,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_resources)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_resources)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resources)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resources)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_resources)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resources)(); }
   } dummy;
}
