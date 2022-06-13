#include "Rent.h"

Rent::Rent(const MyString EGN, const MyString licensePlate, const Date &dateRented, const Date &dateToReturn)
    : EGN(EGN), licensePlate(licensePlate), dateRented(dateRented), dateToReturn(dateToReturn) {}

void Rent::increaseRentalTime(size_t days)
{
    dateToReturn.addDays(days);
}

std::ostream &operator<<(std::ostream &ostr, const Rent &rent)
{
    ostr << rent.EGN << " " << rent.licensePlate << " " << rent.dateRented << " " << rent.dateToReturn;
    return ostr;
}