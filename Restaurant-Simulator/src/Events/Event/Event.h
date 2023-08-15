#pragma once
class Event
{
	int evt_time, id;


public:

	// Getters
	int getEvtTime() const {
		return evt_time;
	}

	int getId() const {
		return id;
	}

	// Setters
	void setEvtTime(int evt_time) {
		this->evt_time = evt_time;
	}

	void setId(int id) {
		this->id = id;
	}

	virtual void excute() = 0;

};

