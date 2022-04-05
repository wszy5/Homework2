#include <iostream>
#include "Time.h"

Time::Time(int x){
    duration = x;
}

Time::Time(){
    duration = 0;
}

Time Time::operator+(const Time &rhs) const {
    return Time(duration+rhs.duration);
}

Time Time::operator-(const Time &rhs) const {
    return Time(duration-rhs.duration);
}

Time Time::operator*(const int &scalar) const {
    return Time(duration*scalar);
}

float Time::to_seconds(const Time &rhs) const{
    return rhs.duration;
}

float Time::to_minutes(const Time &rhs) const{
    return rhs.duration/60;
}

float Time::to_hours(const Time &rhs) const{
    return rhs.duration/3600;
}


std::ostream& operator<<(std::ostream &str, Time &rhs){
    str<<rhs.duration/3600<<"h:"<<rhs.duration/60<<"m:"<<rhs.duration%60<<"s";
        return str;
}

std::istream& operator>>(std::istream &str, Time &rhs){
    str>>rhs.duration;
        return str;
}
