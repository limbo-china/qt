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
	Ui::FTPClass getUiClass() { return ui; }

	private slots:
	void on_fileNameLineEdit_textChanged();
	void on_selectPushButton_clicked();
	void on_uploadPushButton_clicked();
	void updateUploadProgress(qint64, qint64);
	void slotFinished();
private:
	Ui::FTPClass ui;
};

#endif // FTP_H
