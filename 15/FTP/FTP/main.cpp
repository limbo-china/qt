#include "ftp.h"
#include <QtWidgets/QApplication>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	/*FTP w;
	w.show();*/

	QStringList args = QCoreApplication::arguments();

	if (args.count() != 2) {
		cout << "Usage: ftpget url" << endl
		<< "Example:" << endl
		<< " ftpget ftp://1.1.1.1/mirrors"
		<< endl;
		return 1;
	}
	return a.exec();
}
