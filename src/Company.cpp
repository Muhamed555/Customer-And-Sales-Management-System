#include "Company.h"

Company::Company(string loc, string comp_name, int i, string p ) : Customer(i,p){

location = loc;
company_name = comp_name;

}

Company::Company(){
location = "";
}

void Company::addCompany(){

cout << "Please enter the location of the company: ";
cin >> location;

cout << "Please enter the company name: ";
cin >> company_name;

Company c;
cin >> c;

}

void Company::Print(){

cout <<"\n ----------------------------------------------- " << endl;
cout <<"The location of the company is " << location << endl;
cout << "The company name is " << company_name << endl;

cout << "The id of the company is " << getID() << endl;
cout << "The phone of the company is " << getPhone() << endl;

}


void Company::setCompanyName(string com_name){

company_name = com_name;

}

void Company::setCompanyLocation(string loc){

location = loc;

}


