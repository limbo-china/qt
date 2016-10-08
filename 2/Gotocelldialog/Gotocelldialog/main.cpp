#include "gotocelldialog.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Gotocelldialog w;
	w.show();
	return a.exec();
}
