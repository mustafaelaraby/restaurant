#pragma once
#include "imports.h"

class Cook
{
protected:
	int id, count, speed, break_time;
	Order* current_order;
	STATUS status_;

public:
	Cook(int id, int count, int speed) :id(id), count(count), break_time(break_time) {}

	// Getters
	virtual int getId() const = 0;
	virtual int getCount() const = 0;
	virtual int getSpeed() const = 0;
	virtual int getBreakTime() const = 0;
	virtual Order* getCurrentOrder() const = 0;
	virtual STATUS getStatus() const = 0;

	// Setters
	virtual void setId(int id) = 0;
	virtual void setCount(int count) = 0;
	virtual void setSpeed(int speed) = 0;
	virtual void setBreakTime(int break_time) = 0;
	virtual void setCurrentOrder(Order* current_order) = 0;
	virtual void setStatus(STATUS status) = 0;
	virtual void cook() = 0;
	virtual void increment() = 0;
	virtual void reset() = 0;

};

