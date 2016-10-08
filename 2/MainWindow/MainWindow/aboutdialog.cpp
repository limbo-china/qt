#include <QtWidgets/QLabel>
#include <QtWidgets\QHBoxLayout>
#include "aboutdialog.h"

AboutDialog::AboutDialog(QWidget* parent):QDialog(parent) {
	label = new QLabel(tr("Spreadsheet Version 1.0\n\n""Written By Limbo."));

	QHBoxLayout *mainLayout = new QHBoxLayout;
	mainLayout->addWidget(label);

	setLayout(mainLayout);
	setWindowTitle("About");
	setFixedHeight(sizeHint().height());
}