#include "Customers.h"

Customers::Customers(){

people_size = 5;
people_count = 0;

companies_count = 0;
companies_size = 5;

companies = new Company[companies_size];
people = new Person[people_size];
}

Customers::Customers(int people_s, int company_s){

people_size = people_s;
people_count = 0;

companies_count = 0;
companies_size = company_s;

companies = new Company[companies_size];
people = new Person[people_size];

}


Customers::~Customers(){

delete [] companies;
delete [] people;

}


// ============================= Add new Customer =======================================================

void Customers::addCustomer(){
int answer;
cout << " What is the type of your customer (Company ==> 1 / Person ==> 2): ";
cin >> answer;
string location, company_name, customer_phone, billing_address, fullName;
int customer_id;

switch(answer){
case 1:
    if(companies_count < companies_size){

        cout << "Please enter the location of the company: ";
        cin >> location;

        cout << "Please enter the company name: ";
        cin >> company_name;

        cout << "Please enter the id of the customer: ";
        cin >> customer_id;

        cout << "Please enter the phone of the customer: ";
        cin >> customer_phone;

        Company *c = new Company(location, company_name, customer_id,customer_phone);
        companies[companies_count++] = *c;
    }
    break;
case 2:
    if(people_count < people_size){
        cout << "Please enter the full name of the customer: ";
        cin >> fullName;

        cout << "Please enter the billing address of the customer: ";
        cin >> billing_address;

        cout << "Please enter the customer ID: ";
        cin >> customer_id;

        cout << "Please enter the phone of the customer: ";
        cin >> customer_phone;

        Person *p = new Person(fullName, billing_address,customer_phone,customer_id);
        people[people_count++] = *p;
    }
    break;

default:
    cout <<"\n >>>>>>>>>>> Sorry wrong answer!" << endl;

}}

// ============================= Edit Customer =======================================================

void Customers::editCustomer(){

int answer;
cout << "What is the type of the customer you want to edit? (Company ==> 1, Person ==> 2): ";
cin >> answer;

switch(answer){
case 1:
    int company_id;

    if(companies_count == 0){cout << "\n>>>> There are no customers to edit! " << endl;}
    else{
    cout << "Please enter the id of the company you want to edit: ";
    cin >> company_id;}


    for(int i = 0; i < companies_count; i++){
            if(companies[i].getID() == company_id){
                string loc, company_name;
                cout << "Please enter the new location of the company: ";
                cin >> loc;
                companies[i].setCompanyLocation(loc);

                cout << "Please enter the name of the company name: ";
                cin >> company_name;
                companies[i].setCompanyName(company_name);

                cin >> companies[i];
                }}
    break;
case 2:
    int person_id;

    if(companies_count == 0)cout << "\n>>>> There are no customers to edit! " << endl;
    else{
    cout << "Please enter the id of the person you want to edit: ";
    cin >> person_id;}

    for(int i = 0; i < people_count; i++){

        if(people[i].getID() == person_id){
            string fullName, billing_address;
            cout << "Please enter the new full name of the customer: ";
            cin >> fullName;
            people[i].setfullName(fullName);

            cout << "Please enter the new billing address: ";
            cin >> billing_address;
            people[i].setBillingAddress(billing_address);

            cin >> people[i];
        }

    }
    break;
default:
    cout << "\n >>>>>> Sorry wrong choice! " << endl;

}}


// ============================= Delete Customer =======================================================


void Customers::DeleteCustomer(){
int customer_type;
cout << "What is the type of customer you want to delete (Company ==> 1, Person ==> 2) : ";
cin >> customer_type;
bool deleted = false;
switch(customer_type){

case 1:
    int id;
    if(companies_count == 0){cout << "\n>>>>>>>>>>> There are no customers! " << endl;}

    else{
    cout << "Please enter the id of the company you want to delete: ";
    cin >> id;
    }
    for(int i = 0; i < companies_count; i++){

        if (companies[i].getID() == id){


           if(i == companies_count -1){

            companies_count --;


        }else{

         companies[i] = companies[companies_count - 1];
         companies_count--;


        }
        deleted = true;
        break;

        }
        else cout << "\n>>>>>> This customer doesn't exist! \n" <<endl;

    }
    if(deleted){ cout << "\n>>>>>> Customer has been deleted \n " << endl;}
    break;


case 2:
    int id_person;
    if(people_count == 0){cout << "\n >>>>> There are no customers! " << endl;}

    cout << "Please enter the id of the person you want to delete: ";
    cin >> id_person;
    for(int i = 0; i < people_count; i++){

        if (people[i].getID() == id_person){


           if(i == people_count -1){

            people_count --;


        }else{

         people[i] = people[people_count - 1];
         people_count--;


        }
        deleted = true;
        break;

        }
        else cout << "\n>>>>>> This customer doesn't exist! \n" <<endl;

    }
    if(deleted){ cout << "\n>>>>>> Customer has been deleted \n " << endl;}
    break;

}}


// ============================= Print Customers =======================================================

void Customers::Print(){
int customers_type;
cout << "What is the type of customers you want to display(Companies ==> 1, People ==> 2) : ";
cin >> customers_type;
switch(customers_type){
case 1:
    if(companies_count == 0){cout << "\n >>> Sorry there are no customers to display! " << endl;}
    for(int i = 0; i < companies_count; i++){

        companies[i].Print();

    }
    break;
case 2:
    if(companies_count == 0){cout << "\n >>> Sorry there are no customers to display! " << endl;}

    for(int i = 0; i < people_count; i++){

        people[i].Print();
    }
    break;

}

}





