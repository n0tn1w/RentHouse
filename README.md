# Rent House
The project has the goal to help a new rent house to manage its operations. 
The programme can track info for customers, vechiles and rents with a easy to use interface. 
The user can add vehicles and customer, rent a vehicle to a customer and has a lot of utilies which can
help him do its job better.

We have the following classes to help us:
## Vehicles (abstract class)
- Brand
- Model
- License plate
- Year of production
- Number of seats
- Gearbox which can be Manual or Auto
- Type of the engine which can be Diesel, Petrol and Electric
- It has 3 children Car, Motorcycle and Bus

## Car 
- Inherited properties from class Vehicle 
- Is it sports car
- Is it convertable

## Bus 
- Inherited properties from class Vehicle 
- Rating of the bus
- Does it have AC

## Motorcycle
- Inherited properties from class Vehicle 
- Does it have a sidecar
- Does it have extra storage space

## Customer
- Name
- Email address
- EGN
- City
- Phone number
- Username
- Password

## Rent
- EGN of the person (customer can rent multiple vehicles) 
- Licese Plate (a vehicle can be rented by only 1 customer)
- Date rented
- Date to return ( with the needed validations)

## Rent House
- List of all vehicles in store
- List of all signed customers
- List of all current rents
- Functionalities:
-- Add vehicle
-- Print all

Text outside
**italian**


![alt text](https://github.com/n0tn1w/RentHouse/blob/master/Rent_House_UML.png?raw=true)