#include "RentHouse.h"

#include "Car.h"
#include "Bus.h"
#include "Motorcycle.h"

bool RentHouse::addVehicles(Vehicle &&vechile)
{
	if (isLicensePlateUnique(vechile))
	{
		vehicles.addElemenet(vechile);
		return true;
	}
	return false;
}

// add model todo
void RentHouse::addCar(const MyString &brand, const MyString &model, const MyString &licensePlate, const size_t yearOfProduction, const size_t seatsCount, const bool isSportsCar, const bool isConvertable)
{
	addVehicles(Car(brand, licensePlate, yearOfProduction, seatsCount, isSportsCar, isConvertable));
}

void RentHouse::addBus(const MyString &brand, const MyString &model, const MyString &licensePlate, const size_t yearOfProduction, const size_t seatsCount, const size_t rating, const bool hasAC)
{
	addVehicles(Bus(brand, licensePlate, yearOfProduction, seatsCount, rating, hasAC));
}

void RentHouse::addMotorcycle(const MyString &brand, const MyString &model, const MyString &licensePlate, const size_t yearOfProduction, const size_t seatsCount, const bool doesHaveExtraHouse, const bool hasStorageSpace)
{
	addVehicles(Motorcycle(brand, licensePlate, yearOfProduction, seatsCount, doesHaveExtraHouse, hasStorageSpace));
}

bool RentHouse::addCustomer(const MyString &name, const MyString &email, const MyString &EGN, const MyString &city, const MyString &phone, const MyString &username, const MyString &password)
{
	Customer customer(name, email, EGN, city, phone, username, password);
	if (isCustomerWithUniqueEGN(&customer))
	{
		customers.addElemenet(customer); //unique username???
		return true;
	}
	else
	{
		return false;
	}
}

bool RentHouse::isCustomerWithUniqueEGN(Customer *customer)
{
	for (size_t i = 0; i < customers.getCount(); i++)
	{
		if (customer->getEGN() == customers[i]->getEGN())
		{
			return false;
		}
	}
	return true;
}

bool RentHouse::isLicensePlateUnique(Vehicle &vehicle)
{
	for (size_t i = 0; i < vehicles.getCount(); i++)
	{
		if (vehicle.getLicensePlate() == vehicles[i]->getLicensePlate())
		{
			return true;
		}
	}
	return false;
}

void RentHouse::printAllVehicles() const
{
	std::cout << "Number of vehicles" << vehicles.getCount() << std::endl;
	for (size_t i = 0; i < vehicles.getCount(); i++)
	{
		vehicles[i]->print();
	}
}

void RentHouse::printAllCustomers() const
{
	std::cout << "Number of customers" << customers.getCount() << std::endl;
	for (size_t i = 0; i < customers.getCount(); i++)
	{
		customers[i]->print();
	}
}

// new

std::ifstream &operator>>(std::ifstream &ifstr, RentHouse &RH)
{
	size_t vehicleType;
	MyString p1, p2, p3, p4, p5, p6, p7, p8, p9;
	MyString newLine;
	size_t carsCount;

	ifstr >> carsCount >> newLine;

	for (size_t i = 0; i < carsCount; i++)
	{
		ifstr >> p1 >> p2 >> p3 >> p4 >> p5 >> p6 >> p7 >> p8 >> p9;

		vehicleType = p1.convertToInt();
		switch (vehicleType)
		{
		case 0:
			RH.addMotorcycle(p2, p3, p4, p5.convertToInt(), p6.convertToInt(), p7.convertToInt(), p8.convertToInt());
		case 1:
			RH.addCar(p2, p3, p4, p5.convertToInt(), p6.convertToInt(), p7.convertToInt(), p8.convertToInt());
		case 2:
			RH.addBus(p2, p3, p4, p5.convertToInt(), p6.convertToInt(), p7.convertToInt(), p8.convertToInt());
		default:
			std::cout << "Wrong vehicle type specifier!" << std::endl;
			break;
		}
	}

	size_t customersCount = RH.customers.getCount();
	ifstr >> customersCount >> newLine;

	for (size_t i = 0; i < customersCount; i++)
	{
		ifstr >> p1 >> p2 >> p3 >> p4 >> p5 >> p6;

		// RH.addCustomer(p1, p2, p3, p4, p5, p6);
	}
	/*
	size_t rentsCount = RH.rents.getCount();
	ofstr << rentsCount << newLine;
	for (size_t i = 0; i < rentsCount; i++)
	{
		ifstr >> RH.rents[i];
	}
	*/
	return ifstr;
}

std::ofstream &operator<<(std::ofstream &ofstr, const RentHouse &RH)
{
	MyString newLine("\n");
	size_t carsCount = RH.vehicles.getCount();
	ofstr << carsCount << newLine;
	for (size_t i = 0; i < carsCount; i++)
	{
		ofstr << RH.vehicles[i];
	}

	size_t customersCount = RH.customers.getCount();
	ofstr << customersCount << newLine;
	for (size_t i = 0; i < customersCount; i++)
	{
		ofstr << RH.customers[i];
	}
	/*
	size_t rentsCount = RH.rents.getCount();
	ofstr << rentsCount << newLine;
	for (size_t i = 0; i < rentsCount; i++)
	{
		ofstr << RH.rents[i];
	}
	*/
	return ofstr;
}

void RentHouse::printCarsByBrand(const MyString &) const
{

}