#include "imageconvert.h"
#include <QtGui>

ImageConvert::ImageConvert(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QPushButton *convertButton =
		ui.buttonBox->button(QDialogButtonBox::Ok);
	convertButton->setText(tr("&Convert"));
	convertButton->setEnabled(false);

	connect(convertButton, SIGNAL(clicked()),
		this, SLOT(convertImage()));
	connect(ui.buttonBox, SIGNAL(rejected()),
		this, SLOT(reject()));
	connect(&process, SIGNAL(readyReadStandardError()),
		this, SLOT(updateOutputTextEdit()));
	connect(&process, SIGNAL(finished(int, QProcess::ExitStatus)),
		this, SLOT(processFinished(int, QProcess::ExitStatus)));
	connect(&process, SIGNAL(error(QProcess::ProcessError)),
		this, SLOT(processError(QProcess::ProcessError)));
}
void ImageConvert::on_browseButton_clicked() {

}
void ImageConvert::convertImage(){}
void ImageConvert::updateOutputTextEdit(){}
void ImageConvert::processFinished(int exitCode,
	QProcess::ExitStatus exitStatus){}
void ImageConvert::processError(QProcess::ProcessError error){}
