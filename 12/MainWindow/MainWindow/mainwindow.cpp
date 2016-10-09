#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	this->setGeometry(320, 160, 720, 480);  // 调整窗口的大小和位置
	this->statusBar();  // 激活窗口的状态栏
						/*
						daily_reminder = new QAction(QIcon("DailyMangement.jpg"), tr("日常提醒"), this);
						daily_reminder->setStatusTip("设置您的日常提醒事件及提醒时间");
						bill_mangement = new QAction(QIcon("BillMangement.jpg"), tr("账单管理"), this);
						bill_mangement->setStatusTip("管理您的每日及每月账单");
						QToolBar* main_tool_bar = this->addToolBar("工具");
						main_tool_bar->addAction(daily_reminder);
						main_tool_bar->addAction(bill_mangement);
						main_tool_bar->resize(this->size().width(), main_tool_bar->size().height());
						*/

	main_widget = new QWidget;
	main_layout = new QHBoxLayout(main_widget);
	list_widget = new QListWidget;
	list_widget->addItem("日常提醒");
	list_widget->setPalette(QPalette(QColor(0, 0, 0, 0)));
	list_widget->addItem("账单管理");
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
