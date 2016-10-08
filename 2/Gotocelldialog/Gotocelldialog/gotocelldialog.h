#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QtWidgets/QDialog>
#include "ui_gotocelldialog.h"

class Gotocelldialog : public QDialog
{
	Q_OBJECT

public:
	Gotocelldialog(QWidget *parent = 0);
	~Gotocelldialog();

private:
	Ui::GotocelldialogClass ui;
	private slots:
	void on_lineEdit_textChanged();
};

#endif // GOTOCELLDIALOG_H
