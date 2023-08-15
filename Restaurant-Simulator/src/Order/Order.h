#pragma once
#include "imports.h"

class Order
{
private:
	int id_, arrival_time, mony_, size_, waiting_time, service_time, finish_time;
	Type type_;
	STATUS status_;
	COOK_TYPE cook_;
public:
	Order(int, int, int, int);

public:
	// Constructors and other member functions (if any) go here

	// Getters
	int getId() const;
	int getArrivalTime() const;
	int getMony() const;
	int getSize() const;
	int getWaitingTime() const;
	int getServiceTime() const;
	int getFinishTime() const;
	Type getType() const;
	STATUS getStatus() const;
	COOK_TYPE getCook() const;

	// Setters
	void setId(int id);
	void setArrivalTime(int arrival_time);
	void setMony(int mony);
	void setSize(int size);
	void setWaitingTime(int waiting_time);
	void setServiceTime(int service_time);
	void setFinishTime(int finish_time);
	void setType(Type type);
	void setStatus(STATUS status);
	void setCook(COOK_TYPE cook);
};

