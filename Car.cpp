#include "Car.h"

Car::Car() : Vehicle()
{
    category = Category::Automobile;
}

Car::Car(const MyString &brand, const MyString &licensePlate, const size_t yearOfProduction, const size_t seatsCount ,const bool isSportsCar, const bool isConvertable)
: Vehicle(brand, licensePlate, yearOfProduction, seatsCount), isSportsCar(isSportsCar), isConvertable(isConvertable)
{
    category = Category::Automobile;
}

const bool Car::getIsSportsCar() const {
    return isSportsCar;
}
const bool Car::getIsConvertable() const {
    return isConvertable;
}

void Car::setIsSportsCar(const bool isSportsCar) {
    this->isSportsCar = isSportsCar;
}
void Car::setIsConvertable(const bool isConvertable) {
    this->isConvertable = isConvertable;
}


Vehicle *Car::clone() const
{
    return new Car(*this);
}

void Car::print() const {
    Vehicle::print();
    std::cout << "Is SportsCar: " << isSportsCar << "; Is Convertible: " << isConvertable << std::endl;
}
