#include"Watch.h"
Watch::Watch()
{

}


Watch::Watch(int hour, int min, int sec, int year, int month, int days) :t(hour, min, sec),d(year, month, days)
{

}

void Watch::setTimeHours(int h)
{
	t.setHours(h);
}

void Watch::setTimeSeconds(int s)
{
	t.setSeconds(s);
}

void Watch::setTimeMinutes(int m)
{
	t.setMinutes(m);
}

int Watch::getTimeHours()
{
	return t.getHours();
}

int Watch::getTimeMinutes()
{
	return t.getMinutes();
}

int Watch::getTimeSeconds()
{
	return t.getSeconds();
}


void Watch::printTimeTwentyFourHourFormat()
{
	t.printTwentyFourHourFormat();
}

void Watch::printTimeTwelveHourFormat()
{
	t.printTwelveHourFormat();
}

void Watch::incTimeHour(int h)
{
	t.incHour(h);
}


void Watch::incTimeMinutes(int m)
{
	t.incMin(m);
}

void Watch::incTimeSecond(int s)
{
	t.incSec(s);
}

void Watch::setWatchTime(int h, int m, int s)
{
	t.setTime(h, m, s);
}

void Watch::setDateYears(int y)
{
	d.setYears(y);
}

void Watch::setDateMonths(int m)
{
	d.setMonths(m);
}

void Watch::setDateDays(int days)
{
	d.setDay(days);
}

int Watch::getMonths()
{
	return d.getMonths();
}

int Watch::getDay()
{
	return d.getDay();
}

int  Watch::getYears()
{
	return d.getYears();
}

void Watch::incDateDays(int days)
{
	d.incDay(days);
}

void Watch::incDateMonth(int m)
{
	d.incMonth(m);
}

void Watch::incDateYear(int y)
{
	d.incYear(y);
}


void Watch::setWatchDate(int y,int m, int days)
{
	d.setDate(y, m, days);
}

void Watch::printWatchDate()
{
	d.printDate();
}

