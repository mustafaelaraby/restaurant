#include "App.h"
App::App()
{
	p_restaurant_ = new Restaurant();
	p_gui_ = new GUI();
}


void App::run()
{
	p_gui_->start();
	std::string filename = p_gui_->getfile();
	std::cout << filename << std::endl;
	Mode mode = p_gui_->getMode();

}

GUI* App::getGUI()
{
	return p_gui_;
}

Restaurant* App::getRestaurant()
{
	return p_restaurant_;
}


