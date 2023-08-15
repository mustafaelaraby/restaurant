#include "GUI.h"
void GUI::start()
{
	int progressBarWidth = 20;  // Width of the progress bar
	int delay = 100;            // Delay between each progress update in milliseconds
	std::string welcomeMessage = "Welcome to Restaurant Simulator";

	animateProgressBar(progressBarWidth, delay, welcomeMessage);

	std::cout << std::endl;
	std::cout << "Enter Filename: ";
	std::cin >> filename;
	std::cout << std::endl;
	std::cout << "Please Choose Simulation Mode [Interactive: 0, Step-by-Step: 1, Silent: 2] :";
	std::cin >> modeNum;
	setMode();
}

void GUI::setMode()
{
	switch (modeNum)
	{
	case 0:mode = INTERACTIVE; break;
	case 1:mode = STEP_BY_STEP; break;
	case 2:mode = SILENT; break;
	default:break;
	}
}

Mode GUI::getMode() const
{
	return mode;
}

std::string GUI::getfile() const
{
	return filename;
}