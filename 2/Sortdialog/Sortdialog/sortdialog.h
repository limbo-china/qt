#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QtWidgets/QDialog>
#include "ui_sortdialog.h"

class Sortdialog : public QDialog
{
	Q_OBJECT

public:
	Sortdialog(QWidget *parent = 0);
	~Sortdialog();
	void setColumnRange(QChar first, QChar last);

private:
	Ui::SortdialogClass ui;
	private slots:
	void setMoreButtonText(bool toggled);
};

#endif // SORTDIALOG_H
