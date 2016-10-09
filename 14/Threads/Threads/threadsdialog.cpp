#include "threadsdialog.h"

#include <QtGui>

ThreadsDialog::ThreadsDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	A.setMessage(tr("A"));
	B.setMessage(tr("B"));

	connect(ui.threadAButton, SIGNAL(clicked()), this, SLOT(startOrStopThreadA()));
	connect(ui.threadBButton, SIGNAL(clicked()), this, SLOT(startOrStopThreadB()));
}

ThreadsDialog::~ThreadsDialog()
{

}
void ThreadsDialog::startOrStopThreadA(){
	if (A.isRunning()) {
		A.stop();
		ui.threadAButton->setText(tr("Start A"));
	}
	else {
		A.start();
		ui.threadAButton->setText(tr("Stop A"));
	}
}
void ThreadsDialog::startOrStopThreadB(){
	if (B.isRunning()) {
		B.stop();
		ui.threadBButton->setText(tr("Start B"));
	}
	else {
		B.start();
		ui.threadBButton->setText(tr("Stop B"));
	}
}
void ThreadsDialog::closeEvent(QCloseEvent *event){
	A.stop();
	B.stop();
	A.wait();
	B.wait();
	event->accept();
}