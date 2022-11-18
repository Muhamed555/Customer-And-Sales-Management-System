#include "Check.h"

void Check::payCheck(){

cout << "Please enter the name of the check's owner: ";
cin >> name;

cout << "Please enter the bank id: ";
cin >> bank_id;

Payment::Pay();


}


void Check::printCheck(){

cout << "The name of the check's owner is " << name << endl;
cout << "The bank id is " << bank_id << endl;
Payment::printPayment();

}
