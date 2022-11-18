#include "Cash.h"

void Cash::payCash(){

cout << "Please enter the cash value: ";
cin >> cashValue;

Payment::Pay();

}

void Cash::printCash(){

cout << "The cash value is " << cashValue << endl;

Payment::printPayment();


}

