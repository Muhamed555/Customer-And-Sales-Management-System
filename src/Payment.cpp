#include "Payment.h"

void Payment::Pay(){

cout << "Please enter the paid date: ";
cin >> paid_date;

cout << "Please enter the amount: ";
cin >> amount;

}

void Payment::printPayment(){

cout << "The paid date was " << paid_date << endl;
cout << "The amount of payment is " << Payment::amount << endl;

}
