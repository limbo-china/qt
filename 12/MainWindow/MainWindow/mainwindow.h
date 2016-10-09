#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QImage>
#include <QPixmap>
#include <QToolBar>
#include <QListWidget>
#include <QStackedWidget>
#include <QGridLayout>
#include <QHBoxLayout>
#include "dailyreminder.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();
private:
	QAction* bill_mangement;
	QAction* daily_reminder;
	QListWidget* list_widget;
	QStackedWidget* stack_widget;
	QHBoxLayout* main_layout;
	QWidget* main_widget;
};

#endif // MAINWINDOW_H
