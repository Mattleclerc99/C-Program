/*
Program to display time in 12 and 24 format
*/
#include <cstdlib>
#include<ctime>
#include<Windows.h>
#include "clock.h"

//Function
void display(Clock clock);
int menu();

int main()
{
	//Clears Screen
	system("CLS");
	//User Current Local Time
	time_t now = time(0);
	//Gets Minute/Second/Hour
	struct tm timeSplitter;
	timeSplitter = *localtime(&now);
	//Creates Obj
	Clock clock(timeSplitter.tm_hour, timeSplitter.tm_min, timeSplitter.tm_sec);
	//Display time
	display(clock);
	//Sleep & Clear Screen(s)
	Sleep(1000);
	system("CLS");

	//Display menu
	int opt = menu();
	//Loop until exit
	while (opt != 4) {
		//Each option
		if (opt == 1) {
			clock.incrementHr();
			display(clock);
		}
		else if (opt == 2) {
			clock.incrementMinute();
			display(clock);
		}
		else if (opt == 3) {
			clock.incrementSec();
			display(clock);
		}
		//Sleep and clear after 1 second
		Sleep(1000);
		system("CLS");
		opt = menu();
	}
	return 0;
}

//Function that displays both 12 hour and 24 hour clock
void display(Clock clock) {
	cout << "****************************** ******************************\n"
		<< " * 12 - Hour Clock * * 24 - Hour Clock *\n"
		<< " * ";
	clock.display12format();
	cout << " * * ";
	clock.display24format();
	cout << " *\n"
		<< " ***************************** ******************************\n";
}
//User inputs & Display Menu
int menu() {
	int opt;
	cout << "\n******************************\n"
		<< "* 1 - Add One Hour *\n"
		<< "* 2 - Add One Minute *\n"
		<< "* 3 - Add One Second *\n"
		<< "* 4 - Exit Program *\n"
		<< "******************************\n";
	cin >> opt;
	return opt;
}