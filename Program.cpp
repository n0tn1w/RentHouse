#include "Program.h"

void Program::StartMenu()
{
    const int size = 5;
    const MyString commands[size] = {
        "Add", "Print", "Rent", "Delete", "Quit"};
    char char_counter = '1';

    std::cout << "Welcome!\n";
    Print_MyStringArray(commands, size, char_counter);

    bool mustEnd = false;
    int ForceBreak = 0; // can be deleted

    while (!mustEnd && ForceBreak++ < 50)
    {
        std::cout << "> ";

        MyString line;
        line.getLine(std::cin);

        if (line.isChar(char_counter))
        {
            Menu_Add();
        }
        else if (line.isChar(char_counter + 1))
        {
            Menu_Print();
        }
        else if (line.isChar(char_counter + 2))
        {
            Menu_Rent();
        }
        else if (line.isChar(char_counter + 3))
        {
            Menu_Delete();
        }
        else if (line.isChar(char_counter + 4))
        {
            mustEnd = true;
        }
        else if (line == "h")
        {
            Print_MyStringArray(commands, size, char_counter);
        }
        else
        {
            std::cout << "Invalid First Command!\n";
        }
    }
}

void Program::Print_MyStringArray(const MyString *arr, int size, char char_counter) const
{
    std::cout << "Choose one of the following:\n";
    for (int i = 0; i < size; i++)
    {
        std::cout << "   " << char_counter++ << ". ";
        std::cout << arr[i] << "\n";
    }
}

void Program::Menu_Add()
{
    const int size = 2;
    const MyString commands[size] =
        {"Customer", "Vehicle"};
    char char_counter = 'a';

    Print_MyStringArray(commands, size, char_counter);

    std::cout << "   > ";

    MyString line;
    line.getLine(std::cin);

    if (line.isChar(char_counter))
    {
        Add_Customer();
    }
    else if (line.isChar(char_counter + 1))
    {
        Add_Vehicle();
    }
    else
    {
        std::cout << "Invalid Second Command!\n";
    }
}

void Program::Menu_Print()
{
    const int size = 7;

    const MyString commands[size] =
        {"All customers", "All vehicles", "All rents", "Cars by model",
         "Rents by start date", "Rents by end date", "All free cars"};

    char char_counter = 'a';

    Print_MyStringArray(commands, size, char_counter);

    std::cout << "   > ";

    MyString line;
    line.getLine(std::cin);

    if (line.isChar(char_counter))
    {
        rentHouse.printAllCustomers();
    }
    else if (line.isChar(char_counter + 1))
    {
        rentHouse.printAllVehicles();
    }
    else if (line.isChar(char_counter + 2))
    {
        rentHouse.printAllRents();
    }
    else if (line.isChar(char_counter + 3))
    {
        Print_VehiclesByBrand();
    }
    else if (line.isChar(char_counter + 4))
    {
<<<<<<< HEAD
        rentHouse.printRentsByStartDate();
=======
        Print_VehiclesByBrand();
>>>>>>> 84dd6936b79aa28aa7b43425f73363abfd09fbf9
    }
    else if (line.isChar(char_counter + 5))
    {
        rentHouse.printRentsByEndDate();
    }
    else if (line.isChar(char_counter + 6))
    {
        rentHouse.printAllFreeCars();
    }
    else
    {
        std::cout << "Invalid Second Command!\n";
    }
}

void Program::Menu_Rent()
{
    const int size = 4;

    const MyString commands[size] =
        {"Rent a vehicle", "Extend rent", "Change owner", "End rent"};

    char char_counter = 'a';

    Print_MyStringArray(commands, size, char_counter);

    std::cout << "   > ";

    MyString line;
    line.getLine(std::cin);

    if (line.isChar(char_counter))
    {
        Rent_RentVehicle();
    }
    else if (line.isChar(char_counter + 1))
    {
        Rent_ExtendRent();
    }
    else if (line.isChar(char_counter + 2))
    {
        Rent_ChangeOwner();
    }
    else if (line.isChar(char_counter + 3))
    {
        Rent_EndRentVehicle();
    }
    else
    {
        std::cout << "Invalid Second Command!\n";
    }
}

void Program::Menu_Delete()
{
    const int size = 2;
    const MyString commands[size] =
        {"Customer", "Vehicle"};
    char char_counter = 'a';

    Print_MyStringArray(commands, size, char_counter);

    std::cout << "   > ";

    MyString line;
    line.getLine(std::cin);

    if (line.isChar(char_counter))
    {
        Delete_Customer();
    }
    else if (line.isChar(char_counter + 1))
    {
        Delete_Vehicle();
    }
    else
    {
        std::cout << "Invalid Second Command!\n";
    }
}

void Program::Add_Customer()
{
    MyString name, email, EGN, city, phone, username, password;

    std::cout << "Enter name: ";
    name.getLine(std::cin);

    std::cout << "Enter email: ";
    email.getLine(std::cin);

    std::cout << "Enter EGN: ";
    EGN.getLine(std::cin);

    std::cout << "Enter city: ";
    city.getLine(std::cin);

    std::cout << "Enter phone: ";
    phone.getLine(std::cin);

    std::cout << "Enter username: ";
    username.getLine(std::cin);

    std::cout << "Enter password: ";
    password.getLine(std::cin);

    if (rentHouse.addCustomer(name, email, EGN, city, phone, username, password))
    {
        std::cout << "Customer added successfully!\n";
        return;
    }
    std::cout << "Error while adding Customer!\n";
}

void Program::Add_Vehicle()
{
    // should we implement it like this ? .-.
    /*
        Add_Car();
        Add_Motorcycle();
        Add_Bus();

        Program::Add_Car(){}
        Program::Add_Motorcycle(){}
        Program::Add_Bus(){}

        void Add_Car();
        void Add_Motorcycle();
        void Add_Bus();
    */
}

void Program::Print_VehiclesByBrand() const
{
    std::cout << "Enter brand: ";
    MyString brand;
    brand.getLine(std::cin);

    rentHouse.printVehiclesByBrand(brand);
<<<<<<< HEAD
    if (rentHouse.printVehiclesByBrand(brand))
    {
        // They are printed
        return;
    }
    std::cout << "Brand does not exist!\n";
=======
    // if (!rentHouse.printCarsByBrand(brand)) // if bool
    // {
    //     std::cout << "Brand does not exist!\n";
    // }
>>>>>>> 84dd6936b79aa28aa7b43425f73363abfd09fbf9
}

void Program::Delete_Customer()
{
    std::cout << "Enter EGN: ";
    MyString EGN;
    EGN.getLine(std::cin);

    if (rentHouse.deleteCustomer(EGN))
    {
        std::cout << "Customer deleted successfully!\n";
        return;
    }

    std::cout << "Customer deletion failed!\n";
}

void Program::Delete_Vehicle()
{
    std::cout << "Enter License plate: ";
    MyString plate;
    plate.getLine(std::cin);

    if (rentHouse.deleteVechile(plate))
    {
        std::cout << "Vehicle deleted successfully!\n";
        return;
    }

    std::cout << "Vehicle deletion failed!\n";
}

void Program::Rent_RentVehicle()
{
    std::cout << "Enter customer's EGN: ";
    MyString EGN;
    EGN.getLine(std::cin);

    if (!rentHouse.doesCustomerWithEGNExist(EGN))
    {
        std::cout << "No customer found\n";
        return;
    }

    std::cout << "Enter License plate: ";
    MyString plate;
    plate.getLine(std::cin);

    if (rentHouse.isLicensePlateUnique(plate))
    {
        std::cout << "Car does not exist!\n";
        return;
    }

    if (rentHouse.doesRentWithSameLicenseExist(plate))
    {
        std::cout << "Car is already in use\n";
        return;
    }

    std::cout << "Enter start date: ";
    Date StartDate;

    do
    {
        std::cin >> StartDate;
    } while (!StartDate.isValidDate());

    std::cout << "Enter end date: ";
    Date EndDate;

    do
    {
        std::cin >> EndDate;
    } while (!StartDate.isValidDate());

    if (StartDate >= EndDate)
    {
        std::cout << "End date is before Start date!";
    }
<<<<<<< HEAD

    rentHouse.addRent(EGN, plate, StartDate, EndDate);
    std::cout << "Rent added successfuly!\n";
=======
    // if( !rentHouse.addRent(EGN,plate,SDate, EDate) ) {
    //      vehicle with this plate exist
    // }
    // A person can rent 2 cars,
    // but one car cant be rent by 2 people
    // same with man and woman
>>>>>>> 84dd6936b79aa28aa7b43425f73363abfd09fbf9
}

void Program::Rent_EndRentVehicle()
{
<<<<<<< HEAD
    std::cout << "Enter License plate: ";
    MyString plate;
    plate.getLine(std::cin);

    if (rentHouse.removeRent(plate))
    {
        std::cout << "Rent ended successfully!\n";
        return;
    }
    std::cout << "There is no vehicle with this license plate!\n";
=======
    // if( !rentHouse.removeRent(licensePlate) ) {
    //     there is not vehicle with this licensePlate
    // }
>>>>>>> 84dd6936b79aa28aa7b43425f73363abfd09fbf9
}

void Program::Rent_ExtendRent()
{
    std::cout << "Enter License plate: ";
    MyString plate;
    plate.getLine(std::cin);

    if (!rentHouse.doesRentWithSameLicenseExist(plate))
    {
        std::cout << "Rent not found!\n";
        return;
    }

    std::cout << "Enter days to extend: ";
    MyString daysStr;
    daysStr.getLine(std::cin);

    if (!daysStr.isOnlyNumbers())
    {
        // Negative days is checked
        std::cout << "Incorrect format days!\n";
        return;
    }
    size_t days = daysStr.convertToInt();

<<<<<<< HEAD
    if (rentHouse.increaseRentalTime(plate, days))
    {
        std::cout << "Rent days increased successfully!\n";
        return;
    }
    std::cout << "Rent days failed to be increased!\n";
=======
    // if( a.increaseRentalTime(licensePlate, days) ) {
    //      there is not vehicle with this licensePlate
    // }

>>>>>>> 84dd6936b79aa28aa7b43425f73363abfd09fbf9
}

void Program::Rent_ChangeOwner()
{
<<<<<<< HEAD
    std::cout << "Enter License plate: ";
    MyString plate;
    plate.getLine(std::cin);

    if (!rentHouse.doesRentWithSameLicenseExist(plate))
    {
        std::cout << "Rent not found!\n";
        return;
    }

    std::cout << "Enter Customer's EGN to change the car to: ";
    MyString EGN;
    EGN.getLine(std::cin);

    if (!rentHouse.doesCustomerWithEGNExist(EGN))
    {
        std::cout << "Customer not found!\n";
        return;
    }

    if (rentHouse.changeOwners(EGN, plate))
    {
        std::cout << "Rent owner changed successfully!\n";
    }

    std::cout << "Rent owner change failed!\n";
=======
    // cout << fromEGN << toEGN << licensePlate
    // if(rentHouse.changeOwners(fromEGN, toEGN, licensePlate)){
    //     something went wrong (a lot of thing could go wrong)
    // }

>>>>>>> 84dd6936b79aa28aa7b43425f73363abfd09fbf9
}
