#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <QSemaphore>

class Thread : public QThread {
	Q_OBJECT
public:
	Thread();

	void setMessage(const QString &message);
	void stop();

protected:
	void run();
private:
	QString messageStr;
	volatile bool stopped;
	QMutex mutex;
};

class Producer :public QThread {
	Q_OBJECT
protected:
	void run();
};
class Consumer :public QThread {
	Q_OBJECT
protected:
	void run();
};
#endif // !THREAD_H
