#include "RentHouse.h"
#include <iostream>

bool RentHouse::addVehicles(Vehicle&& vechile) {
    if(isLicensePlateUnique(vechile)){
        vehicles.addElemenet(vechile);
    }else {
        return false;
    }
}

void RentHouse::addCar(const MyString &brand, const MyString &licensePlate, const size_t yearOfProduction, const size_t seatsCount ,const bool isSportsCar, const bool isConvertable) {
    addVehicles(Car(brand, licensePlate, yearOfProduction, seatsCount, isSportsCar, isConvertable));
}

void RentHouse::addBus(const MyString &brand, const MyString &licensePlate, const size_t yearOfProduction, const size_t seatsCount ,const size_t rating, const bool hasAC) {
    addVehicles(Bus(brand, licensePlate, yearOfProduction, seatsCount, rating, hasAC));
}

void RentHouse::addMotorcycle(const MyString &brand, const MyString &licensePlate, const size_t yearOfProduction, const size_t seatsCount ,const bool doesHaveExtraHouse, const bool hasStorageSpace) {
    addVehicles(Motorcycle(brand, licensePlate, yearOfProduction, seatsCount, doesHaveExtraHouse, hasStorageSpace));
}

bool RentHouse::addCustomer(const MyString& name, const MyString& email, const MyString& EGN, const MyString& city, const MyString& phone, const MyString& username, const MyString& password) {
    Customer customer(name, email, EGN, city, phone, username, password);
    if(isCustomerWithUniqueEGN(&customer)){
        customers.addElemenet(customer);
        return true;
    }else{
        return false;
    }
}

bool RentHouse::isCustomerWithUniqueEGN(Customer* customer) {
    for(size_t i = 0; i < customers.getCount(); i++) {
        if(customer->getEGN() == customers[i]->getEGN()) {
            return false;
        }
    }
    return true;
}

bool RentHouse::isLicensePlateUnique(Vehicle& vehicle) {
    for(size_t i  = 0; i < vehicles.getCount(); i++) {
        if(vehicle.getLicensePlate() == vehicles[i]->getLicensePlate()) {
            return true;
        }
    }
    return false;
}

void RentHouse::printAllVehicles() const {
    std::cout << "Number of vehicles" << vehicles.getCount() << std::endl;
    for(size_t i = 0; i < vehicles.getCount(); i++) {
        vehicles[i]->print();
    }
}

void RentHouse::printAllCustomers() const {
    std::cout << "Number of customers" << customers.getCount() << std::endl;
    for(size_t i = 0; i < customers.getCount(); i++) {
        customers[i]->print();
    }
}

