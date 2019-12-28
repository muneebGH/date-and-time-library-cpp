#include"Date.h"
#include"Time.h"
class Watch
{
private:
	Date d;
	Time t;
public:
	Watch();
	Watch(int hour, int min, int sec, int year, int months, int days);
	//time
	void setTimeHours(int h);
	void setTimeMinutes(int m);
	void setTimeSeconds(int s);
	int getTimeHours();
	int getTimeMinutes();
	int getTimeSeconds();
	void printTimeTwelveHourFormat();
	void printTimeTwentyFourHourFormat();
	void incTimeHour(int h);
	void incTimeSecond(int s);
	void incTimeMinutes(int m);
	void setWatchTime(int h, int m, int s);
	//date
	void setDateYears(int y);
	void setDateDays(int days);
	void setDateMonths(int m);
	int getYears();
	int getMonths();
	int getDay();
	void incDateYear(int y);
	void incDateMonth(int m);
	void incDateDays(int days);
	void setWatchDate(int y, int m, int days);
	void printWatchDate();
};