#pragma once
#include "Person.h"
#include "MyString.h"

class Customer : public Person {

    MyString username;
    MyString password;

public:
    Customer();
    Customer(const MyString&, const MyString&, const MyString&, const MyString&, const MyString&, const MyString&, const MyString&);

    const MyString& getUsername() const;
    void setUsername(const MyString&);
    const MyString& getPassword() const;
    void setPassword(const MyString&);

};
