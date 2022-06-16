#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle()
{
    gearbox = Vehicle::Gearbox::UnknownGearbox;
    engineType = Vehicle::EngineType::UnknownEngineType;
    category = Vehicle::Category::UnknownVehicleType;
}

Vehicle::Vehicle(const MyString &brand, const MyString &licensePlate,
                 const size_t yearOfProduction, const size_t seatsCount)
{
    setBrand(brand);
    setLicensePlate(licensePlate);
    setYearOfProduction(yearOfProduction);
    setSeatsCount(seatsCount);
}

void Vehicle::setBrand(const MyString &brand)
{
    this->brand = brand;
}

void Vehicle::setLicensePlate(const MyString &licensePlate)
{
    this->licensePlate = licensePlate;
}

void Vehicle::setYearOfProduction(const size_t yearOfProduction)
{
    this->yearOfProduction = yearOfProduction;
}

void Vehicle::setSeatsCount(const size_t seatsCount)
{
    this->seatsCount = seatsCount;
}

void Vehicle::setModel(const MyString &model)
{
    this->model = model;
}

void Vehicle::setEngineType(const size_t index)
{
    engineType = (EngineType)index;
}

void Vehicle::setGearbox(const size_t index)
{
    gearbox = (Gearbox)index;
}

const MyString &Vehicle::getBrand() const
{
    return brand;
}

const MyString &Vehicle::getLicensePlate() const
{
    return licensePlate;
}

size_t Vehicle::getYearOfProduction() const
{
    return yearOfProduction;
}

size_t Vehicle::getSeatsCount() const
{
    return seatsCount;
}

const MyString &Vehicle::getModel() const
{
    return model;
}

const Vehicle::Category &Vehicle::getCategory() const
{
    return category;
}

const Vehicle::Gearbox &Vehicle::getGearbox() const
{
    return gearbox;
}

const Vehicle::EngineType &Vehicle::getEngineType() const
{
    return engineType;
}

bool Vehicle::isVehicleNew()
{
    const size_t newYear = 2010;
    return yearOfProduction >= newYear;
}

void Vehicle::print() const
{
    std::cout << "License plate: " << licensePlate << std::endl;
    std::cout << "Brand: " << brand
              << ", Model: " << model
              << ", Year of production: " << yearOfProduction
              << ", Number of seats: " << seatsCount << "; " << std::endl;
}
