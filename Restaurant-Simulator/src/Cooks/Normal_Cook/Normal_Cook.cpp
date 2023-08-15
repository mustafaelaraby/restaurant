#include "Normal_Cook.h"

// Constructor
Normal_Cook::Normal_Cook(int id, int count, int speed)
	: Cook(id, count, speed) { }

// Getters
int Normal_Cook::getId() const {
	return id;
}

int Normal_Cook::getCount() const {
	return count;
}

int Normal_Cook::getSpeed() const {
	return speed;
}

int Normal_Cook::getBreakTime() const {
	return break_time;
}

Order* Normal_Cook::getCurrentOrder() const {
	return current_order;
}

STATUS Normal_Cook::getStatus() const {
	return status_;
}

// Setters
void Normal_Cook::setId(int id) {
	this->id = id;
}

void Normal_Cook::setCount(int count) {
	this->count = count;
}

void Normal_Cook::setSpeed(int speed) {
	this->speed = speed;
}

void Normal_Cook::setBreakTime(int break_time) {
	this->break_time = break_time;
}

void Normal_Cook::setCurrentOrder(Order* current_order) {
	this->current_order = current_order;
}

void Normal_Cook::setStatus(STATUS status) {
	status_ = status;
}

// Other member function implementations (cook, increment, reset, etc.)
void Normal_Cook::cook()
{
	increment();
}

void Normal_Cook::increment()
{
	count++;
}

void Normal_Cook::reset()
{
	count = 0;
}