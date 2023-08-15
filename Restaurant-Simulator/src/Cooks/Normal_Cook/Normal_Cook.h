#pragma once
#include "../Cook/Cook.h"

class Normal_Cook :public Cook
{

public:
	Normal_Cook(int, int, int);
	// Getters
	int getId() const override;
	int getCount() const override;
	int getSpeed() const override;
	int getBreakTime() const override;
	Order* getCurrentOrder() const override;
	STATUS getStatus()const override;

	// Setters
	void setId(int id)override;
	void setCount(int count)override;
	void setSpeed(int speed)override;
	void setBreakTime(int break_time)override;
	void setCurrentOrder(Order* current_order)override;
	void setStatus(STATUS)override;


	void cook() override;
	void increment() override;
	void reset() override;
};

