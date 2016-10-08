#include "sortdialog.h"

Sortdialog::Sortdialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.secondaryGroupBox->hide();
	ui.tertiaryGroupBox->hide();
	layout()->setSizeConstraint(QLayout::SetFixedSize);
}
void Sortdialog::setColumnRange(QChar first, QChar last) {
	
	ui.primaryColumnCombo->clear();
	ui.secondaryColumnCombo->clear();
	ui.tertiaryColumnCombo->clear();

	ui.secondaryColumnCombo->addItem(tr("None"));
	ui.tertiaryColumnCombo->addItem(tr("None"));
	ui.primaryColumnCombo->setMinimumSize(ui.secondaryColumnCombo->sizeHint());

	QChar ch = first;
	while (ch <= last) {
		ui.primaryColumnCombo->addItem(QString(ch));
		ui.secondaryColumnCombo->addItem(QString(ch));
		ui.tertiaryColumnCombo->addItem(QString(ch));
		ch = ch.unicode() + 1;
	}
}
void Sortdialog::setMoreButtonText(bool toggled) {
	if (toggled)
		ui.moreButton->setText(tr("More<<"));
	else
		ui.moreButton->setText(tr("More>>"));
}
Sortdialog::~Sortdialog()
{

}
