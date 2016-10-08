#include "projectlist.h"
#include "projectlistwidget.h"

#include <QtWidgets\QHBoxLayout>

ProjectList::ProjectList(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ProjectListWidget *plw1 = new ProjectListWidget;
	ProjectListWidget *plw2 = new ProjectListWidget;
	
	QHBoxLayout *layout = new QHBoxLayout;
	layout->addWidget(plw1);
	layout->addWidget(plw2);

	QWidget *w = new QWidget;
	w->setLayout(layout);
	setCentralWidget(w);
	
}

ProjectList::~ProjectList()
{

}
