#pragma once

#include "MyString.h"
#include "Date.h"

class Rent
{
private:
    MyString EGN;
    MyString licensePlate;
    Date dateRented;
    Date dateToReturn;

public:
    Rent() = default;
    Rent(const MyString, const MyString, const Date &, const Date &);

    void increaseRentalTime(size_t);

    friend std::ostream &operator<<(std::ostream &, const Rent &);
};
