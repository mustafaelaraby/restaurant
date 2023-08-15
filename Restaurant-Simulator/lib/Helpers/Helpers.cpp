#include "helpers.h"


void delay(int milliseconds) {
	std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

void animateText(const std::string& text, int delay) {
	for (char c : text) {
		std::cout << c << std::flush;  // Output the character without buffering
		std::this_thread::sleep_for(std::chrono::milliseconds(delay));
	}
}

void animateProgressBar(int width, int delay, const std::string& message) {
	std::cout << "Loading: [";
	for (int i = 0; i <= width; ++i) {
		std::cout << "=" << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(delay));
	}
	std::cout << "] " << "Done!" << std::endl << message << std::endl;
}

void waitForEnter() {
	std::cout << "Press Enter to continue...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}