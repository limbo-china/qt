#include "imageconvert.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ImageConvert w;
	w.show();
	return a.exec();
}
