#include "dailyreminder.h"

Event::Event(QWidget* parent) : QWidget(parent)
{
	event_name = new QLabel;
	event_time = new QLabel;
	sound_name = new QLabel;
	change_button = new QPushButton;
	delete_button = new QPushButton;
	main_layout = new QHBoxLayout(this);
	this->Edit();
	connect(change_button, SIGNAL(clicked()), this, SLOT(Edit()));
	connect(delete_button, SIGNAL(clicked()), this, SLOT(DeleteEvent()));
	main_layout->addWidget(event_name);
	main_layout->addWidget(event_time);
	main_layout->addWidget(sound_name);
	main_layout->addWidget(change_button);
	main_layout->addWidget(delete_button);
}

void Event::Edit()  // 编辑事件槽函数
{
	QDialog* dialog = new QDialog;
	dialog->setWindowTitle(tr("添加事件"));
	QHBoxLayout* layout = new QHBoxLayout(dialog);
	QLabel* event_name_tip_label = new QLabel(tr("事件名称："));
	QLineEdit* event_name_line_edit = new QLineEdit;
	QLabel* event_time_tip_label = new QLabel(tr("事件时间："));
	QLineEdit* event_time_line_edit = new QLineEdit;
	QPushButton* sound_select_button = new QPushButton(tr("选择提示音"));
	connect(sound_select_button, SIGNAL(clicked()), this, SLOT(FileSelect()));
	layout->addWidget(event_name_tip_label);
	layout->addWidget(event_name_line_edit);
	layout->addWidget(event_time_tip_label);
	layout->addWidget(event_time_line_edit);
	layout->addWidget(sound_select_button);
	this->event_name->setText(event_name_line_edit->text());
	this->event_time->setText(event_time_line_edit->text());
	dialog->show();
}

void Event::FileSelect()    // 文件选择槽函数
{
	QString str = QFileDialog::getOpenFileName(this, "选择音频文件", "/");
	this->sound_name->setText(str);
}

void Event::DeleteEvent()   // 删除事件槽函数
{

}

Event::~Event()
{

}
Event::Event(const Event &) {

}
DailyReminder::DailyReminder(QWidget *parent) : QWidget(parent)
{
	event_list = new QList<Event>;
	add_event_button = new QPushButton(tr("添加事件"));
	add_event_layout = new QHBoxLayout;
	//    this->UpdateLayout();
	add_event_layout->addSpacing(this->size().width() / 3);
	add_event_layout->addWidget(add_event_button);
	add_event_layout->addSpacing(this->size().width() / 3);
	connect(add_event_button, SIGNAL(clicked()), this, SLOT(AddEvent()));
}

/*
void DailyReminder::UpdateLayout()     // 更新布局函数
{
this->main_layout->deleteLater();
main_layout = new QVBoxLayout(this);
//    foreach(Event new_event, event_list)
//    {
//        main_layout->addWidget(&new_event);
//    }
add_event_layout->addSpacing(this->size().width() / 3);
add_event_layout->addWidget(add_event_button);
add_event_layout->addSpacing(this->size().width() / 3);
}
*/

void DailyReminder::AddEvent()  // 添加事件槽函数
{
	Event* new_event = new Event;
	event_list->append(*new_event);
}

DailyReminder::~DailyReminder()
{

}
