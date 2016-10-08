#include "gotocelldialog.h"

Gotocelldialog::Gotocelldialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//Ĭ���Զ��������淶���ź����������һ�𣬴����м�Ϊ�ź�textchanged()��on_lineEdit_textchanged()�ۡ�
	
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
