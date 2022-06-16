#pragma once

#include "Vehicle.h"
#include "Container.h"
#include "Customer.h"
#include "Rent.h"

typedef Container<Vehicle> ListVehicles;
typedef Container<Customer> ListCustomers;
typedef Container<Rent> ListRents;

class RentHouse
{
private:
	ListVehicles vehicles;
	ListCustomers customers;
	ListRents rents;

	void freeCars();

public:
	bool addCustomer(const MyString &, const MyString &, const MyString &, const MyString &, const MyString &, const MyString &, const MyString &);

	void addCar(const MyString &, const MyString &, const MyString &, const size_t, const size_t, const bool, const bool);
	void addBus(const MyString &, const MyString &, const MyString &, const size_t, const size_t, const size_t, const bool);
	void addMotorcycle(const MyString &, const MyString &, const MyString &, const size_t, const size_t, const bool, const bool);

	void printAllVehicles() const;
	void printAllCustomers() const;
	void printAllRents() const;
	bool printVehiclesByBrand(const MyString &) const;
<<<<<<< HEAD

	bool deleteCustomer(const MyString &);
	bool deleteVechile(const MyString &);

	bool addRent(const MyString &, const MyString &, const Date &, const Date &);
	bool removeRent(const MyString &);
	bool increaseRentalTime(const MyString &, const size_t);
	bool changeOwners(const MyString &, const MyString &);

	void printRentsByStartDate() const;
	void printRentsByEndDate() const;
	void printAllFreeCars() const;
=======

	bool deleteCustomer(const MyString&);
	bool deleteVechiles(const MyString&);

	bool addRent(const MyString&, const MyString&, const Date&, const Date&);
	bool removeRent(const MyString&);
	bool increaseRentalTime(const MyString&, const size_t);
	bool changeOwners(const MyString&, const MyString&, const MyString&);


    void printCarsByPrice();
    //TODO
    /*
    printRentsByStartDate();
    printRentsByEndDate();
    printAllFreeCars();
    */
>>>>>>> 84dd6936b79aa28aa7b43425f73363abfd09fbf9

	friend std::ifstream &operator>>(std::ifstream &, RentHouse &);
	friend std::ofstream &operator<<(std::ofstream &, const RentHouse &);

	bool addVehicles(Vehicle &&);
<<<<<<< HEAD
	bool isLicensePlateUnique(const MyString &);
	bool doesCustomerWithEGNExist(const MyString &);
	bool doesRentWithSameLicenseExist(const MyString &);
=======
	bool isCustomerWithUniqueEGN(Customer *);
	bool isLicensePlateUnique(Vehicle &);
	bool doesRentWithSameLicenseExist(const MyString&);
	bool doesCustomerWithEGNExist(const MyString&);
>>>>>>> 84dd6936b79aa28aa7b43425f73363abfd09fbf9

	friend std::ifstream &operator>>(std::ifstream &, RentHouse &);
	friend std::ofstream &operator<<(std::ofstream &, const RentHouse &);
};
