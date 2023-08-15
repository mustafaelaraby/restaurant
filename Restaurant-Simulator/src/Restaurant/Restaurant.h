#pragma once
#include <fstream>

#include "../../lib/Containers/Queue/Queue.h"
#include "../Order/Order.h"

class Restaurant
{
	std::string filename;
	std::ifstream input;
	std::ofstream output;
	Queue<Order> orders;
};

