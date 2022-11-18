#ifndef COMPANY_H
#define COMPANY_H
#include "Customer.h"

#include <iostream>

using namespace std;

class Company : public Customer
{

private:
    string location;
    string company_name;
public:
    Company();
    Company(string, string, int, string);
    void addCompany();
    void Print();

    // Setters
    void setCompanyName(string);
    void setCompanyLocation(string);
};

#endif // COMPANY_H
