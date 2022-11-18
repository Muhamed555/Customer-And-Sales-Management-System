#include "Credit.h"

void Credit::payCrdit(){

cout << "Please enter the number: ";
cin >> number;

cout << "Please enter the expire date: ";
cin >> expire_date;

cout << "Please enter the type: ";
cin >> type;

Payment::Pay();
}

void Credit::printCredit(){
cout << "The number of the credit is " << number << endl;
cout << "The expire date is " << expire_date << endl;
cout << "The type is " << type << endl;
Payment::printPayment();

}

