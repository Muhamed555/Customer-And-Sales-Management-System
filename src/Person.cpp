#include "Person.h"

Person::Person(string fullNam, string billing_add, string phone, int i ): Customer(i,phone){

fullName = fullNam;
billing_address = billing_add;


}
Person::Person(){
fullName = "";
}

void Person::addPerson(){

cout << "Please enter the billing address: ";
cin >> billing_address;

cout << "Please enter the full name of the person: ";
cin >> fullName;

Person p;

cin >> p;
}


void Person::Print(){

cout << "\n ----------------------------------------------- " << endl;
cout << "The billing address is" << billing_address << endl;
cout << "The full name is " << fullName << endl;

cout << "The id of the person is " << getID();
cout << "The phone of the person is " << getPhone();

}

// Setters

void Person::setBillingAddress(string b){
billing_address = b;
}

void Person::setfullName(string f){
fullName = f;
}


