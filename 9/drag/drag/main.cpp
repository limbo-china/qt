#include "drag.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	drag w;
	w.show();
	return a.exec();
}
