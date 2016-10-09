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
private:
	Thread A;
	Thread B;

	Ui::ThreadsDialogClass ui;
};

#endif // ThreadsDialog_H
