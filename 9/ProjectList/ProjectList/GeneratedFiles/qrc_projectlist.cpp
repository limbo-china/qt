/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.7.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // E:/qt/9/ProjectList/ProjectList/images/person.png
  0x0,0x0,0x0,0xc1,
  0x89,
  0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,
  0x0,0x0,0x16,0x0,0x0,0x0,0x16,0x8,0x2,0x0,0x0,0x0,0x4b,0xd6,0xfb,0x6c,
  0x0,0x0,0x0,0x6,0x74,0x52,0x4e,0x53,0x0,0x0,0x0,0x0,0x0,0x0,0x6e,0xa6,
  0x7,0x91,0x0,0x0,0x0,0x6,0x62,0x4b,0x47,0x44,0x0,0xff,0x0,0xff,0x0,0xff,
  0xa0,0xbd,0xa7,0x93,0x0,0x0,0x0,0x64,0x49,0x44,0x41,0x54,0x38,0xcb,0xcd,0x94,
  0xe1,0xa,0x0,0x10,0xc,0x84,0xbd,0xff,0x4b,0x23,0xa,0x8d,0x9b,0x9b,0x51,0x96,
  0xfc,0x71,0xf7,0xb5,0x33,0x9,0xe1,0x75,0xc5,0x52,0x2e,0x7f,0xde,0x2a,0xc7,0xe5,
  0x3f,0xa7,0x5c,0x40,0x98,0x83,0x44,0x50,0xd,0x1,0x4e,0x41,0xcf,0xfc,0xea,0x94,
  0xb,0x8,0x14,0x44,0xa8,0xb5,0x20,0x1f,0xf,0xf5,0x3,0xc4,0x72,0x46,0x6,0xca,
  0xe8,0x17,0xa3,0x61,0x9f,0xe9,0x6c,0x30,0x50,0x14,0x29,0x45,0xd9,0x8a,0x36,0x2,
  0xb2,0x55,0x28,0x33,0x5d,0x98,0x46,0xe1,0xbf,0x49,0x21,0x4e,0xa4,0x64,0x6a,0xa4,
  0xf6,0x4a,0x8,0x89,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82,
  
  
};

static const unsigned char qt_resource_name[] = {
  // images
  0x0,0x6,
  0x7,0x3,0x7d,0xc3,
  0x0,0x69,
  0x0,0x6d,0x0,0x61,0x0,0x67,0x0,0x65,0x0,0x73,
    // person.png
  0x0,0xa,
  0xa,0x6f,0x8e,0x67,
  0x0,0x70,
  0x0,0x65,0x0,0x72,0x0,0x73,0x0,0x6f,0x0,0x6e,0x0,0x2e,0x0,0x70,0x0,0x6e,0x0,0x67,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/images
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
  // :/images/person.png
  0x0,0x0,0x0,0x12,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

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

int QT_RCC_MANGLE_NAMESPACE(qInitResources_projectlist)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_projectlist)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_projectlist)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_projectlist)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_projectlist)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_projectlist)(); }
   } dummy;
}