#ifndef CUSTOMERS_H
#define CUSTOMERS_H
#include <iostream>
#include "Company.h"
#include "Person.h"
using namespace std;


class Customers
{
private:
    Company *companies;
    Person  *people;

    int people_count;
    int people_size;

    int companies_count;
    int companies_size;

public:
    ~Customers();
    Customers(int, int);
    Customers();

    void addCustomer();
    void editCustomer();
    void DeleteCustomer();
    void Print();

};

#endif // CUSTOMERS_H
