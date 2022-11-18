#include "Customer.h"

string Customer::Print(){

return id, phone;
}
Customer::Customer(){

phone = "";
};

Customer::Customer(int i, string p){

id = i;
phone = p;

}

// ================================ Getters =====================================

int Customer::getID(){

return id;
}

string Customer::getPhone(){

return phone;

}

// ========================== Setters ===================================

void Customer::setID(int d){

id = d;

}

void Customer::setPhone(string p){

phone = p;

}



ostream& operator <<(ostream& COUT, const Customer& c){

COUT << "The id of the customer is " << c.id << endl;
COUT << "The phone of the customer is " << c.phone << endl;

return COUT;
}

istream& operator >>(istream& CIN, Customer& c){

cout << "Enter the id of the customer: ";
CIN  >> c.id;
cout << "Enter the phone of the customer: ";
CIN >> c.phone;

return CIN;
}
