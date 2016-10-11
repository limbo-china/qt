#ifndef FTP_H
#define FTP_H

#include <QtWidgets/QMainWindow>
#include "ui_ftp.h"

class FTP : public QMainWindow
{
	Q_OBJECT

public:
	FTP(QWidget *parent = 0);
	~FTP();

private:
	Ui::FTPClass ui;
};

#endif // FTP_H
