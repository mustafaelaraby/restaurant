#include "Order.h"

Order::Order(int id, int arrival, int size, int mony)
	:id_(id), arrival_time(arrival), size_(size), mony_(mony) {}


// Implement getters
int Order::getId() const {
	return id_;
}

int Order::getArrivalTime() const {
	return arrival_time;
}

int Order::getMony() const {
	return mony_;
}

int Order::getSize() const {
	return size_;
}

int Order::getWaitingTime() const {
	return waiting_time;
}

int Order::getServiceTime() const {
	return service_time;
}

int Order::getFinishTime() const {
	return finish_time;
}

Type Order::getType() const {
	return type_;
}

STATUS Order::getStatus() const {
	return status_;
}

COOK_TYPE Order::getCook() const {
	return cook_;
}

// Implement setters
void Order::setId(int id) {
	id_ = id;
}

void Order::setArrivalTime(int arrival_time) {
	arrival_time = arrival_time;
}

void Order::setMony(int mony) {
	mony_ = mony;
}

void Order::setSize(int size) {
	size_ = size;
}

void Order::setWaitingTime(int waiting_time) {
	waiting_time = waiting_time;
}

void Order::setServiceTime(int service_time) {
	service_time = service_time;
}

void Order::setFinishTime(int finish_time) {
	finish_time = finish_time;
}

void Order::setType(Type type) {
	type_ = type;
}

void Order::setStatus(STATUS status) {
	status_ = status;
}

void Order::setCook(COOK_TYPE cook) {
	cook_ = cook;
}
