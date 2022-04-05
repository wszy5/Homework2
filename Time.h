#ifndef TIME_H
#define TIME_H

#include <iostream>

class Time{
    int duration;

public:
    Time(int x);
    Time();

    Time operator+(const Time &rhs) const;
    Time operator-(const Time &rhs) const;
    Time operator*(const int &scalar) const;

    float to_seconds(const Time &rhs) const;
    float to_minutes(const Time &rhs) const;
    float to_hours(const Time &rhs) const;

    friend std::ostream& operator<<(std::ostream &str, Time &rhs);
    friend std::istream& operator>>(std::istream &str, Time &rhs);
};


#endif // TIME_H
