#ifndef IMAGECONVERT_H
#define IMAGECONVERT_H

#include <QtWidgets/QDialog>
#include <QProcess>
#include "ui_imageconvert.h"

class ImageConvert : public QDialog
{
	Q_OBJECT

public:
	ImageConvert(QWidget *parent = 0);

	private slots:
	void on_browseButton_clicked();
	void convertImage();
	void updateOutputTextEdit();
	void processFinished(int exitCode,
		QProcess::ExitStatus exitStatus);
	void processError(QProcess::ProcessError error);

private:
	Ui::ImageConvert ui;
	QProcess process;
	QString targetFile;
};

#endif // IMAGECONVERT_H
