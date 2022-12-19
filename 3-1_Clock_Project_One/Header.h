#include<iostream>
using namespace std;
//Creates Time Class
class Clock {
	//Variables of Member
private:
	int hours;
	int minutes;
	int seconds;
	//Functions of Member
public:
	Clock();
	Clock(int hrs, int mnts, int secs);
	void setHours(int hrs);
	void setMinutes(int mnts);
	void setSeconds(int secs);
	int getHrs();
	int getMinutes();
	int getSeconds();
	void display24format();
	void display12format();
	void incrementHr();
	void incrementMinute();
	void incrementSec();
};
