/****************************************************************************
** Meta object code from reading C++ file 'imageconvert.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../imageconvert.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageconvert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImageConvert_t {
    QByteArrayData data[12];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageConvert_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageConvert_t qt_meta_stringdata_ImageConvert = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ImageConvert"
QT_MOC_LITERAL(1, 13, 23), // "on_browseButton_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "convertImage"
QT_MOC_LITERAL(4, 51, 20), // "updateOutputTextEdit"
QT_MOC_LITERAL(5, 72, 15), // "processFinished"
QT_MOC_LITERAL(6, 88, 8), // "exitCode"
QT_MOC_LITERAL(7, 97, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(8, 118, 10), // "exitStatus"
QT_MOC_LITERAL(9, 129, 12), // "processError"
QT_MOC_LITERAL(10, 142, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(11, 165, 5) // "error"

    },
    "ImageConvert\0on_browseButton_clicked\0"
    "\0convertImage\0updateOutputTextEdit\0"
    "processFinished\0exitCode\0QProcess::ExitStatus\0"
    "exitStatus\0processError\0QProcess::ProcessError\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageConvert[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    2,   42,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void ImageConvert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageConvert *_t = static_cast<ImageConvert *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_browseButton_clicked(); break;
        case 1: _t->convertImage(); break;
        case 2: _t->updateOutputTextEdit(); break;
        case 3: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 4: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ImageConvert::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ImageConvert.data,
      qt_meta_data_ImageConvert,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImageConvert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageConvert::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImageConvert.stringdata0))
        return static_cast<void*>(const_cast< ImageConvert*>(this));
    return QDialog::qt_metacast(_clname);
}

int ImageConvert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
