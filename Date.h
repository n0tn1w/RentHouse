#pragma once

#include <fstream>
#include <iostream>

class Date
{

private:
    size_t day, month, year;

public:
    Date();
    Date(const size_t day, const size_t month, const size_t year);

    size_t daysToDate(const Date &);
    size_t daysThisYear() const;
    bool isBetweenDates(const Date &, const Date &);

    friend bool operator==(const Date &, const Date &);
    friend bool operator!=(const Date &, const Date &);

    friend bool operator<(const Date &, const Date &);
    friend bool operator>(const Date &, const Date &);
    friend bool operator>=(const Date &, const Date &);
    friend bool operator<=(const Date &, const Date &);
};

bool isValidDate(const size_t day, const size_t month, const size_t year);

size_t daysIn(size_t, size_t);
bool isLeapYear(const size_t year);
size_t getCurrentYear();
