#pragma once
#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QtWidgets/QDialog>

class QLabel;
class AboutDialog :public QDialog {

public:
	AboutDialog(QWidget* parent = 0);
private:
	QLabel *label;
};

#endif // !ABOUTDIALOG_H