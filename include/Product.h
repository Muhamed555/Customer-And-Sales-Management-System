#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>

using namespace std;

class Product
{
private:
    int id;
    string number;
    string name;
    double price;
    string type;
public:
    // Getters
    int getID();
    string getType();
    string getNumber();
    string getName();
    double getPrice();

    // Setters

    void setID(int);
    void setType(int);
    void setNumber(string);
    void setName(string);
    void setPrice(double);

    Product();
    Product(int i, string num, string n,double p, string t);
    void Update();
    friend ostream& operator<<(ostream& COUT, const Product& p);
    friend istream& operator>>(istream& CIN, Product& p);
};

#endif // PRODUCT_H
