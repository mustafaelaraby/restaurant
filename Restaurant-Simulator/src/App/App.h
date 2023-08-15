#pragma once
#include "../GUI/GUI.h"
#include "../Restaurant/Restaurant.h"

class App
{
	Restaurant* p_restaurant_;
	GUI* p_gui_;

public:
	App();

	void run();

	Restaurant* getRestaurant();
	GUI* getGUI();
};

