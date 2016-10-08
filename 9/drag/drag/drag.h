#ifndef DRAG_H
#define DRAG_H

#include <QtWidgets/QMainWindow>
#include <QTextEdit>
#include "ui_drag.h"

class drag : public QMainWindow
{
	Q_OBJECT

public:
	drag(QWidget *parent = 0);
	~drag();

protected:
	void dragEnterEvent(QDragEnterEvent *event);
	void dropEvent(QDropEvent *event);

private:
	Ui::dragClass ui;
	//bool readFile(const QString &fileName);
	QTextEdit *textEdit;
};

#endif // DRAG_H
