#ifndef THREADSDIALOG_H
#define THREADSDIALOG_H

#include <QtWidgets/QDialog>
#include "ui_threadsdialog.h"
#include "thread.h"

class ThreadsDialog : public QDialog
{
	Q_OBJECT

public:
	ThreadsDialog(QWidget *parent = 0);
	~ThreadsDialog();
protected:
	void closeEvent(QCloseEvent *event);
	
	private slots:
	void startOrStopThreadA();
	void startOrStopThreadB();
	void startProducer();
	void startConsumer();
private:
	Thread A;
	Thread B;
	Producer Producer;
	Consumer Consumer;

	Ui::ThreadsDialogClass ui;
};

#endif // ThreadsDialog_H
