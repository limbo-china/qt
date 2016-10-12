/****************************************************************************
** Meta object code from reading C++ file 'ftp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ftp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ftp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FTP_t {
    QByteArrayData data[7];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FTP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FTP_t qt_meta_stringdata_FTP = {
    {
QT_MOC_LITERAL(0, 0, 3), // "FTP"
QT_MOC_LITERAL(1, 4, 31), // "on_fileNameLineEdit_textChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "on_selectPushButton_clicked"
QT_MOC_LITERAL(4, 65, 27), // "on_uploadPushButton_clicked"
QT_MOC_LITERAL(5, 93, 20), // "updateUploadProgress"
QT_MOC_LITERAL(6, 114, 12) // "slotFinished"

    },
    "FTP\0on_fileNameLineEdit_textChanged\0"
    "\0on_selectPushButton_clicked\0"
    "on_uploadPushButton_clicked\0"
    "updateUploadProgress\0slotFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FTP[] = {

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
       6,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void,

       0        // eod
};

void FTP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FTP *_t = static_cast<FTP *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_fileNameLineEdit_textChanged(); break;
        case 1: _t->on_selectPushButton_clicked(); break;
        case 2: _t->on_uploadPushButton_clicked(); break;
        case 3: _t->updateUploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->slotFinished(); break;
        default: ;
        }
    }
}

const QMetaObject FTP::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FTP.data,
      qt_meta_data_FTP,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FTP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FTP::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FTP.stringdata0))
        return static_cast<void*>(const_cast< FTP*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FTP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
