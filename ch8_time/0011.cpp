#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "0011.h"

using namespace std;

Time::Time(int hr, int min, int sec)
{
    setTime(hr, min, sec);
}

Time &Time::setTime(int h, int min, int second)
{
    setH(h);
    setM(min);
    setS(second);
    return *this;
}

Time &Time::setH(int h)
{

    if (h >= 0 && h < 24)
        hour = h;
    else
        throw invalid_argument("hour must be 0-23");
    return *this;
}

Time &Time::setM(int m)
{

    if (m >= 0 && m < 60)
        minute = m;
    else
        throw invalid_argument("minute must be 0-59");

    return *this;
}

Time &Time::setS(int s)
{

    if (s >= 0 && s < 60)
        second = s;
    else
        throw invalid_argument("second must be 0-59");

    return *this;
}

unsigned int Time::getHo() const
{

    return hour;
}
unsigned int Time::getM() const
{

    return minute;
}

unsigned int Time::getS() const
{

    return second;
}

void Time::printUniversal() const
{

    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
}

void Time::printStandard() const
{

    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
         << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? "AM" : "PM");
}

int main()

{
    Time t;

    t.setH(11).setM(11).setS(22);
    t.printStandard();
    cout << "\n";
    t.printUniversal();

    cout << "\n\nCas on cascade on casanova\n\n";

    t.setTime(2, 33, 44).printUniversal();

    return 0;
}