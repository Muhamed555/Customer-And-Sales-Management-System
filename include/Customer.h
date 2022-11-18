#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>

using namespace std;

class Customer
{
 private:
     int id;
     string phone;


 public:
    Customer();
    Customer(int, string);
    string Print();

    // Getters
    int getID();
    string getPhone();
    // Setters
    void setID(int);
    void setPhone(string);


    friend ostream& operator <<(ostream&, const Customer& c);
    friend istream& operator >>(istream&, Customer& c);
};

#endif // CUSTOMER_H
