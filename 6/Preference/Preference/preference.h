#ifndef PREFERENCE_H
#define PREFERENCE_H

#include <QtWidgets/QWidget>
#include "ui_preference.h"

class Preference : public QWidget
{
	Q_OBJECT

public:
	Preference(QWidget *parent = 0);
	~Preference();

private:
	Ui::PreferenceClass ui;
};

#endif // PREFERENCE_H
