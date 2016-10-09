#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	this->setGeometry(320, 160, 720, 480);  // �������ڵĴ�С��λ��
	this->statusBar();  // ����ڵ�״̬��
						/*
						daily_reminder = new QAction(QIcon("DailyMangement.jpg"), tr("�ճ�����"), this);
						daily_reminder->setStatusTip("���������ճ������¼�������ʱ��");
						bill_mangement = new QAction(QIcon("BillMangement.jpg"), tr("�˵�����"), this);
						bill_mangement->setStatusTip("��������ÿ�ռ�ÿ���˵�");
						QToolBar* main_tool_bar = this->addToolBar("����");
						main_tool_bar->addAction(daily_reminder);
						main_tool_bar->addAction(bill_mangement);
						main_tool_bar->resize(this->size().width(), main_tool_bar->size().height());
						*/

	main_widget = new QWidget;
	main_layout = new QHBoxLayout(main_widget);
	list_widget = new QListWidget;
	list_widget->addItem("�ճ�����");
	list_widget->setPalette(QPalette(QColor(0, 0, 0, 0)));
	list_widget->addItem("�˵�����");
	stack_widget = new QStackedWidget;
	QWidget* daily_reminder_widget = new QWidget;
	QHBoxLayout* daily_layout = new QHBoxLayout(daily_reminder_widget);
	DailyReminder* d = new DailyReminder;
	daily_layout->addWidget(d);
	QWidget* bill_mangement_widget = new QWidget;
	stack_widget->addWidget(daily_reminder_widget);
	stack_widget->addWidget(bill_mangement_widget);
	connect(list_widget, SIGNAL(currentRowChanged(int)), this->stack_widget, SLOT(setCurrentIndex(int)));

	main_layout->addWidget(list_widget);
	main_layout->addWidget(stack_widget);
	main_layout->setStretchFactor(list_widget, 1);
	main_layout->setStretchFactor(stack_widget, 5);
	this->setCentralWidget(main_widget);
}

MainWindow::~MainWindow()
{

}
