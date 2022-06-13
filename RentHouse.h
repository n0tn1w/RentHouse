#pragma once

#include "Vehicle.h"
#include "Container.h"
#include "Customer.h"

typedef Container<Vehicle> ListCars;
typedef Container<Customer> ListCustomers;

class RentHouse
{
private:
	ListCars cars;
	ListCustomers customers;

	void freeCars();

public:
	void addCar();
	void addPerson();

	void rentCar();
	void returnCar();

	void extendRentalPeriod();

	void printAllFreeCars() const;
	void printAllCars() const;
	void printAllPeople() const;
	void printAllRents() const;

	friend std::ifstream &operator>>(std::ifstream &, RentHouse &);
	friend std::ofstream &operator<<(std::ofstream &, const RentHouse &);
};
