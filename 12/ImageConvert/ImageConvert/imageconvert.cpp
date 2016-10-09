#include "imageconvert.h"
#include <QtGui>
#include <QtWidgets/QFileDialog>

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
	QString initialName = ui.sourceFileEdit->text();
	if (initialName.isEmpty())
		initialName = QDir::homePath();
	QString fileName =
		QFileDialog::getOpenFileName(this, tr("Choose File"),
			initialName);

	fileName = QDir::toNativeSeparators(fileName);

	if (!fileName.isEmpty()) {
		ui.sourceFileEdit->setText(fileName);
		ui.buttonBox->button(QDialogButtonBox::Ok)->setEnabled(true);
	}	
}
void ImageConvert::convertImage(){
	QString sourceFile = ui.sourceFileEdit->text();
	targetFile = QFileInfo(sourceFile).path() + QDir::separator()
		+ QFileInfo(sourceFile).baseName() + "."
		+ ui.targetFormatComboBox->currentText().toLower();
	ui.buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
	ui.outputTextEdit->clear();

	QStringList args;
	if (ui.enhanceCheckBox->isChecked())
		args << "-enhance";
	if (ui.monochromeCheckBox->isChecked())
		args << "-monochrome";
	args << sourceFile << targetFile;

	process.start("convert", args);
}
void ImageConvert::updateOutputTextEdit(){
	QByteArray newData = process.readAllStandardError();
	QString text = ui.outputTextEdit->toPlainText()
		+ QString::fromLocal8Bit(newData);
	ui.outputTextEdit->setPlainText(text);
}
void ImageConvert::processFinished(int exitCode,
	QProcess::ExitStatus exitStatus){
	if (exitStatus == QProcess::CrashExit) {
		ui.outputTextEdit->append(tr("Conversion program crashed"));
	}
	else if (exitCode != 0) {
		ui.outputTextEdit->append(tr("Conversion failed"));
	}
	else {
		ui.outputTextEdit->append(tr("File %1 created").arg(targetFile));
	}
	ui.buttonBox->button(QDialogButtonBox::Ok)->setEnabled(true);
}
void ImageConvert::processError(QProcess::ProcessError error){
	if (error == QProcess::FailedToStart) {
		ui.outputTextEdit->append(tr("Conversion program not found"));
		ui.buttonBox->button(QDialogButtonBox::Ok)->setEnabled(true);
	}
}
