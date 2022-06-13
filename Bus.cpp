#include "Bus.h"

Bus::Bus() : Vehicle()
{
    category = Category::Bus;
}

Bus::Bus(const MyString &brand, const MyString &licensePlate, const size_t yearOfProduction, const size_t seatsCount ,const size_t rating, const bool hasAC)
: Vehicle(brand, licensePlate, yearOfProduction, seatsCount), rating(rating), hasAC(hasAC)
{
    category = Category::Bus;
}


const size_t Bus::getRating() const {
    return rating;
}
void Bus::setRating(const size_t rating) {
    this->rating = rating;
}

const bool Bus::getHasAC() const {
    return hasAC;
}
void Bus::setHasAC(const bool hasAC) {
    this->hasAC = hasAC;
}

Vehicle *Bus::clone() const
{
    return new Bus(*this);
}

void Bus::print() const {
    Vehicle::print();
    std::cout << "Rating: " << rating << "; Has AC: " << hasAC << std::endl;
}
