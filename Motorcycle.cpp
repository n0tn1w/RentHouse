#include "Motorcycle.h"

Motorcycle::Motorcycle() : Vehicle()
{
    category = Category::Motorcycle;
}


Motorcycle::Motorcycle(const MyString &brand, const MyString &licensePlate, const size_t yearOfProduction, const size_t seatsCount ,const bool doesHaveExtraHouse, const bool hasStorageSpace)
: Vehicle(brand, licensePlate, yearOfProduction, seatsCount), doesHaveExtraHouse(doesHaveExtraHouse), hasStorageSpace(hasStorageSpace)
{
    category = Category::Motorcycle;
}

const bool Motorcycle::getDoesHaveExtraHouse() const {
    return doesHaveExtraHouse;
}
const bool Motorcycle::getHasStorageSpace() const {
    return hasStorageSpace;
}

void Motorcycle::setDoesHaveExtraHouse(const bool doesHaveExtraHouse) {
    this->doesHaveExtraHouse = doesHaveExtraHouse;
}
void Motorcycle::setHasStorageSpace(const bool hasStorageSpace) {
    this->hasStorageSpace = hasStorageSpace;
}

Vehicle *Motorcycle::clone() const
{
    return new Motorcycle(*this);
}

void Motorcycle::print() const {
    Vehicle::print();
    std::cout << "Does it have extra house: " << doesHaveExtraHouse << "; Has storage space: " << hasStorageSpace << std::endl;
}

