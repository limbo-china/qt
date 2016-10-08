#ifndef HELLOQT_H
#define HELLOQT_H

#include <QtWidgets/QMainWindow>
#include "ui_helloqt.h"

class helloqt : public QMainWindow
{
	Q_OBJECT

public:
	helloqt(QWidget *parent = 0);
	~helloqt();

private:
	Ui::helloqtClass ui;
};

#endif // HELLOQT_H
