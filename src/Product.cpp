#include "Product.h"

Product::Product(int i, string num, string n,double p, string t){

id = i;
number = num;
name = n;
price = p;
type = t;

}

Product::Product(){
cout << "" << endl;
}

// ====================== Getters =====================

int Product::getID(){

return id;
}

string Product::getType(){

return type;
}

string Product::getNumber(){

return number;
}

string Product::getName(){

return name;

}

double Product::getPrice(){

return price;
}


// ====================== Setters =====================

void Product::setID(int i){
id = i;
}

void Product::setType(int t){

type = t;
}

void Product::setNumber(string n){
name = n;

}

void Product::setPrice(double p){

price = p;

}

void Product::setName(string n){

name  =n;

}

void Product::Update(){

cout << "Enter the id of the product: ";
cin >> id;

cout << "Enter the number of the product: ";
cin >> number;

cout << "Enter the name of the product: ";
cin >> name;

cout << "Enter the price of the product: ";
cin >> price;

cout << "Enter the type of the product: ";
cin >> type;
}

ostream& operator<<(ostream& COUT, const Product& p){
COUT << "==================================================" << endl;
COUT << "The id of the product is: " << p.id << endl;
COUT << "The number of the product is: " << p.number << endl;
COUT << "The name of the product is: " << p.name << endl;
COUT << "The price of the product is: " << p.price << endl;
COUT << "The type of the product is: " << p.type << endl;
COUT << "===================================================" << endl;

return COUT;
}

istream& operator >>(istream& CIN, Product& p){

cout << "Enter the id of the product: ";
CIN >> p.id;

cout << "Enter the number of the product: ";
CIN >> p.number;

cout << "Enter the name of the product: ";
CIN >> p.name;

cout << "Enter the price of the product: ";
CIN >> p.price;

cout << "Enter the type of the product: ";
CIN >> p.type;

return CIN;
}
