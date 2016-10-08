#ifndef PROJECTLIST_H
#define PROJECTLIST_H

#include <QtWidgets/QMainWindow>
#include "ui_projectlist.h"

class ProjectList : public QMainWindow
{
	Q_OBJECT

public:
	ProjectList(QWidget *parent = 0);
	~ProjectList();

private:
	Ui::ProjectListClass ui;
};

#endif // PROJECTLIST_H
