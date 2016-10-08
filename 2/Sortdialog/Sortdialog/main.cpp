#include "sortdialog.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Sortdialog w;
	w.setColumnRange('A', 'Z');
	w.show();
	return a.exec();
}
