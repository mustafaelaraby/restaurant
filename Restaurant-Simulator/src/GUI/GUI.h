#pragma once
#include "imports.h"

class GUI
{
	std::string filename;
	int modeNum;
	Mode mode = INTERACTIVE;
public:
	void start();
	std::string getfile()const;
	Mode getMode()const;
private:
	void setMode();
};