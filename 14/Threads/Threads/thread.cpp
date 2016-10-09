#include "thread.h"

#include <iostream>

Thread::Thread() {
	stopped = false;
}

void Thread::run() {
	while (!stopped)
		std::cout << qPrintable(messageStr)<< " ";
	stopped = false;
	std::cout << std::endl;
}
void Thread::stop() {
	stopped = true;
}
void Thread::setMessage(const QString &message) {
	messageStr = message;
}