#include "ftp.h"

#include <QtGui>
#include <QFileDialog>
#include <QtNetwork>
#include <iostream>

using namespace std;
FTP::FTP(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.uploadPushButton->setEnabled(false);
	ui.uploadProgressBar->setFixedWidth(200);

}
void FTP::on_fileNameLineEdit_textChanged() {
	if (!ui.fileNameLineEdit->text().isEmpty())
		ui.uploadPushButton->setEnabled(true);
	else
		ui.uploadPushButton->setEnabled(false);
}
void FTP::on_selectPushButton_clicked(){
	QString fileName = QFileDialog::getOpenFileName(this, tr("Select File To Uplaod"),
		QDir::homePath());
	fileName = QDir::toNativeSeparators(fileName);
	ui.fileNameLineEdit->setText(fileName);
}
void FTP::on_uploadPushButton_clicked(){

	QFile txt(ui.fileNameLineEdit->text());

	if (txt.open(QIODevice::ReadOnly)) {
		cout << "open file success!" << endl;
		QTextStream in(&txt);

		QString t;
		in >> t;
		cout << t.toStdString() << endl;
	}
	else
		cout << "fail to open file!" << endl;

	QByteArray by_txt = txt.readAll();
	txt.close();

	QNetworkAccessManager manager;
	QUrl u("ftp://121.42.57.216/test/text.txt");
	u.setUserName("ftpadmin");
	u.setPassword("aptx4869");

	QNetworkReply *reply = manager.put(QNetworkRequest(u), by_txt);

	connect(reply, SIGNAL(uploadProgress(qint64, qint64)), 
		this, SLOT(updateUploadProgress(qint64, qint64)));
	connect(reply, SIGNAL(finished()), this, SLOT(slotFinished()));

}
void FTP::updateUploadProgress(qint64 sent, qint64 total) {
	ui.uploadProgressBar->setMaximum(total);
	ui.uploadProgressBar->setValue(sent);
}
void FTP::slotFinished() {
	QNetworkReply *reply = (QNetworkReply *)sender();
	if (reply->error() == QNetworkReply::NoError)
	{
		cout << "Succeed!";
	}
	else
	{
		cout << "Check & Retry!!!";
	}
}
FTP::~FTP()
{

}
