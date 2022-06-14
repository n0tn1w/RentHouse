#pragma once

#include "Vehicle.h"
#include "Container.h"
#include "Customer.h"
#include "Rent.h"

typedef Container<Vehicle> ListVehicles;
typedef Container<Customer> ListCustomers;

class RentHouse
{
private:
	ListVehicles vehicles;
	ListCustomers customers;

	void freeCars();

public:
	bool addCustomer(const MyString &, const MyString &, const MyString &, const MyString &, const MyString &, const MyString &, const MyString &);

	void addCar(const MyString &, const MyString &, const MyString &, const size_t, const size_t, const bool, const bool);
	void addBus(const MyString &, const MyString &, const MyString &, const size_t, const size_t, const size_t, const bool);
	void addMotorcycle(const MyString &, const MyString &, const MyString &, const size_t, const size_t, const bool, const bool);

	void printAllVehicles() const;
	void printAllCustomers() const;
	void printAllRents() const;

	// implement master
	void printCarsByPrice() const;
	void printRentsByStartDate() const;
	void printRentsByEndDate() const;
	void printCarsByBrand(const MyString &) const;

	void rentCar();
	void returnCar();
	void extendRentalPeriod();
	void printAllFreeCars() const;

	friend std::ifstream &operator>>(std::ifstream &, RentHouse &);
	friend std::ofstream &operator<<(std::ofstream &, const RentHouse &);

private:
	bool addVehicles(Vehicle &&);
	bool isCustomerWithUniqueEGN(Customer *);
	bool isLicensePlateUnique(Vehicle &);

	friend std::ifstream &operator>>(std::ifstream &, RentHouse &);
	friend std::ofstream &operator<<(std::ofstream &, const RentHouse &);
};
