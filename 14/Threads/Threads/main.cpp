#include "threadsdialog.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ThreadsDialog w;
	w.show();
	return a.exec();
}
