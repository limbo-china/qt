#include "thread.h"

#include <iostream>

const int DataSize = 10;
const int BufferSize = 4;
char buffer[BufferSize];

QSemaphore freeSpace(BufferSize);
QSemaphore usedSpace(0);

Thread::Thread() {
	stopped = false;
}

void Thread::run() {
	forever{
		mutex.lock();
	if (stopped) {
		stopped = false;
		mutex.unlock();
		break;
	}
	mutex.unlock();
	std::cout << qPrintable(messageStr);
	}
	std::cout << std::endl;
}
void Thread::stop() {
	mutex.lock();
	stopped = true;
	mutex.unlock();
}
void Thread::setMessage(const QString &message) {
	messageStr = message;
}
void Producer::run() {
	for (int i = 0; i < DataSize; i++) {
		freeSpace.acquire();
		//buffer[i%BufferSize] = "ACGT"[uint(std::rand()) % 4];
		std::cout << "p";
		usedSpace.release();
	}
}
void Consumer::run() { 
	for (int i = 0; i < DataSize; i++) {
		usedSpace.acquire();
		//std::cout << buffer[i%BufferSize];
 		std::cout << "c";
		freeSpace.release();
	}
	std::cout << std::endl;
} 