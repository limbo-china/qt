#include "mainwindow.h"
#include <QtWidgets/QApplication>
#include <QtCore/QTime>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QSplashScreen *splash = new QSplashScreen;
	splash->setPixmap(QPixmap(":/images/start.png"));
	splash->show();

	Qt::Alignment topRight = Qt::AlignRight | Qt::AlignTop;
	splash->showMessage(QObject::tr("Setting up the main window ..."), topRight);

	MainWindow w;

	QTime t;
	t.start();
	while (t.elapsed() < 2000)
		QCoreApplication::processEvents();

	w.show();
	splash->finish(&w);
	delete splash;
	return a.exec();
}
