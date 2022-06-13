#include "Customer.h"

Customer::Customer(): Person() { }

Customer::Customer(const MyString& name, const MyString& email, const MyString& EGN, const MyString& city, const MyString& phone, const MyString& username, const MyString& password)
: Person(name, email, EGN, city, phone), username(username), password(password) { }

const MyString& Customer::getUsername() const {
    return username;
}

void Customer::setUsername(const MyString& username) {
    this->username = username;
}

const MyString& Customer::getPassword() const {
    return password;
}

void Customer::setPassword(const MyString& password) {
    this->password = password;
}
