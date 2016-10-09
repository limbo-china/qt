#ifndef DAILYREMINDER_H
#define DAILYREMINDER_H

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QFileDialog>
#include <QMessageBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QList>
#include <QString>
#include <QDialog>

class Event : public QWidget
{
	Q_OBJECT
public:
	explicit Event(QWidget* parent = 0);
	Event::Event(const Event &);
	~Event();
	public slots:
	void Edit();
	void FileSelect();
	void DeleteEvent();
private:
	QLabel* event_name;
	QLabel* event_time;
	QLabel* sound_name;
	QPushButton* change_button;
	QPushButton* delete_button;
	QHBoxLayout* main_layout;
};


class DailyReminder : public QWidget
{
	Q_OBJECT
public:
	explicit DailyReminder(QWidget *parent = 0);
	//    void UpdateLayout();
	~DailyReminder();
signals:

	public slots :
		void AddEvent();
private:
	QList<Event>* event_list;
	QPushButton* add_event_button;
	QHBoxLayout* add_event_layout;
	QVBoxLayout* main_layout;
};

#endif // DAILYREMINDER_H
