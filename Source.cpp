#include <Windows.h>
#include <ctime>
#include <iostream>
#include <string>

int main() {
	
	SetConsoleTitle("VRTX.GG Valorant Spoofer");
	
	std::cout << "Please wait while we spoof your PC!\n";
	srand(time(0));

	system("AMIDEWINx64.EXE /SU AUTO");
	std::string cmd = "AMIDEWINx64.EXE /BS NL-" + std::to_string((rand() % 9999999999) + 1000000000);
	system(cmd.c_str());
	cmd = "AMIDEWINx64.EXE /BT NL-" + std::to_string((rand() % 9999999999) + 1000000000);
	system(cmd.c_str());
	
	std::cout << "Almost finished...\n";

	system("tmac.exe -n Wi-Fi -r02 -re -s");
	system("tmac.exe -n Ethernet -r -re -s");

	std::cout << "Spoof complete!\nYou may close the spoofer now.";
	std::cin.get();
}