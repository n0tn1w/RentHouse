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

<<<<<<< HEAD
const MyString &Rent::getEGN() const
{
    return EGN;
}

void Rent::setEGN(const MyString &EGN)
{
    this->EGN = EGN;
}

const MyString &Rent::getLicensePlate() const
{
    return licensePlate;
}

void Rent::setLicensePlate(const MyString &licensePlate)
{
    this->licensePlate = licensePlate;
}

const Date &Rent::getDateRented() const
{
    return dateRented;
}

void Rent::setDateRented(const Date &dateRented)
{
    this->dateRented = dateRented;
}

const Date &Rent::getDateToReturn() const
{
    return dateToReturn;
}

void Rent::setDateToReturn(const Date &dateToReturn)
{
    this->dateToReturn = dateToReturn;
}

Rent *Rent::clone() const
{
    return new Rent(*this);
}

void Rent::print() const
{
    std::cout << "Vehicle license plate: " << licensePlate
              << "; Customer's EGN: " << EGN
              << ";" << std::endl;

    std::cout << "Starting date: " << dateRented
              << "; Ending date: " << dateToReturn << ";" << std::endl;
=======

const MyString& Rent::getEGN() const {
    return EGN;
}
void Rent::setEGN(const MyString& EGN) {
    this->EGN = EGN;
}

const MyString &Rent::getLicensePlate() const {
    return licensePlate;
}
void Rent::setLicensePlate(const MyString& licensePlate) {
    this->licensePlate = licensePlate;
}

Rent* Rent::clone() const {
    return new Rent(*this);
}
void Rent::print() const {
    std::cout << "Vehicle license plate: " << licensePlate << "; Customer's EGN: " << EGN << ";" << std::endl;
    std::cout << "Starting date: " << dateRented << "; Ending date: " << dateToReturn << ";" << std::endl;
>>>>>>> 84dd6936b79aa28aa7b43425f73363abfd09fbf9
}
