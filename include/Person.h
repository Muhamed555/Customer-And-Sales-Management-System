#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include "Customer.h"

using namespace std;

class Person : public Customer
{

 private:
     string billing_address;
     string fullName;
 public:
    Person();
    Person(string, string, string, int);
    void addPerson();
    void Print();

    void setfullName(string);
    void setBillingAddress(string);
};

#endif // PERSON_H
