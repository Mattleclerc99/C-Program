#include "clock.h"
//Constructor
Clock::Clock() {
	hours = minutes = seconds = 0;
}
Clock::Clock(int hrs, int mnts, int secs) {
	setHours(hrs);
	setMinutes(mnts);
	setSeconds(secs);
}
//Setters of Clock
void Clock::setHours(int hrs)
{
	if (hrs > 23) {
		hours = 0;
	}
	else {
		hours = hrs;
	}
};
void Clock::setMinutes(int mnts)
{
	if (mnts > 59) {
		minutes = mnts;
		seconds += 1;
		if (seconds > 59) {
			seconds = seconds - 60;
			minutes += 1;
		}
		if (minutes > 59) {
			hours += 1;
			minutes = minutes - 60;
		}
		if (hours > 23) {
			hours = 0;
		}
	}
	else {
		minutes = mnts;
	}
}
void Clock::setSeconds(int secs)
{
	if (secs > 59) {
		seconds = secs - 60;
		minutes += 1;
		if (minutes > 59) {
			hours += 1;
			minutes = minutes - 60;
		}
		if (hours > 23) {
			hours = 0;
		}
	}
	else {
		seconds = secs;
	}
}
//Getters of Clock
int Clock::getHrs() {
	return hours;
}
int Clock::getMinutes() {
	return minutes;
}
int Clock::getSeconds() {
	return seconds;
}
//24 hour format display setup
void Clock::display24format()
{
	if (hours < 10 || minutes < 10 || seconds < 10) {
		if (hours < 10) {

			cout << "0" << hours;
		}
		else {
			cout << hours;
		}
		if (minutes < 10) {
			cout << ":0" << minutes;
		}
		else {
			cout << ":" << minutes;
		}
		if (seconds < 10) {
			cout << ":0" << seconds;
		}
		else {
			cout << ":" << seconds;
		}
	}
	else {
		cout << hours << ":" << minutes << ":" << seconds;
	}
}
//12 hour format display setup
void Clock::display12format()
{
	if (hours > 12)
	{
		hours = hours - 12;
		if (hours < 10 || minutes < 10 || seconds < 10) {
			if (hours < 10) {
				cout << "0" << hours;
			}
			else {
				cout << hours;
			}
			if (minutes < 10) {
				cout << ":0" << minutes;
			}
			else {
				cout << ":" << minutes;
			}
			if (seconds < 10) {
				cout << ":0" << seconds << " PM";
			}
			else {
				cout << ":" << seconds << " PM";
			}
		}
		else {
			cout << hours << ":" << minutes << ":" << seconds << " PM";
		}
	}
	else if (hours == 12)
	{
		hours = 12;
		if (hours < 10 || minutes < 10 || seconds < 10) {
			if (hours < 10) {
				cout << "0" << hours;
			}
			else {
				cout << hours;
			}
			if (minutes < 10) {
				cout << ":0" << minutes;
			}
			else {
				cout << ":" << minutes;
			}
			if (seconds < 10) {
				cout << ":0" << seconds << " PM";
			}
			else {
				cout << ":" << seconds << " PM";
			}
		}
		else {
			cout << hours << ":" << minutes << ":" << seconds << " PM";
		}
	}
	else if (hours == 0)
	{
		hours = 12;
		if (hours < 10 || minutes < 10 || seconds < 10) {
			if (hours < 10) {
				cout << "0" << hours;
			}
			else {
				cout << hours;
			}
			if (minutes < 10) {
				cout << ":0" << minutes;
			}
			else {
				cout << ":" << minutes;
			}
			if (seconds < 10) {
				cout << ":0" << seconds << " AM";
			}
			else {
				cout << ":" << seconds << " AM";
			}
		}
		else {
			cout << hours << ":" << minutes << ":" << seconds << " AM";
		}
	}
	else {
		if (hours < 10 || minutes < 10 || seconds < 10) {
			if (hours < 10) {
				cout << "0" << hours;
			}
			else {
				cout << hours;
			}
			if (minutes < 10) {
				cout << ":0" << minutes;
			}
			else {
				cout << ":" << minutes;
			}
			if (seconds < 10) {
				cout << ":0" << seconds << " AM";
			}
			else {
				cout << ":" << seconds << " AM";
			}
		}
		else {
			cout << hours << ":" << minutes << ":" << seconds << " AM";
		}
	}
}
//Adding 1 hour Incrementation
void Clock::incrementHr() {
	hours += 1;
	setHours(hours);
}
//Adding 1 minute Incrementation
void Clock::incrementMinute() {
	minutes += 1;
	setMinutes(minutes);
}
//Adding 1 second Incrementation
void Clock::incrementSec() {
	seconds += 1;
	setSeconds(seconds);
}