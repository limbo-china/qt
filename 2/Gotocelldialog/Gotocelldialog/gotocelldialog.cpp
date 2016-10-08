#include "gotocelldialog.h"

Gotocelldialog::Gotocelldialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//默认自动将命名规范的信号与槽连接在一起，此例中即为信号textchanged()和on_lineEdit_textchanged()槽。
	
	ui.buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
	
	QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
	ui.lineEdit->setValidator(new QRegExpValidator(regExp, this));

	connect(ui.buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
	connect(ui.buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
}
void Gotocelldialog::on_lineEdit_textChanged() {
	ui.buttonBox->button(QDialogButtonBox::Ok)->setEnabled(ui.lineEdit->hasAcceptableInput());
}

Gotocelldialog::~Gotocelldialog()
{

}
