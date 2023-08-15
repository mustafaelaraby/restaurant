#pragma once
#include "../Event/Event.h"

class CancelEvent :public Event
{
	void excute() override;
};

