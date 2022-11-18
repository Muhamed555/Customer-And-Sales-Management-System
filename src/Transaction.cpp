#include "Transaction.h"


void Transaction::addTransaction(){
int answer;
cout << "Please enter the transaction date: ";
cin >> transaction_date;
cout << "How would you like to pay this order (Cash == 1, Credit ==> 2, Check ==> 3): ";
cin >> answer;

switch(answer){
case 1:
    cash.payCash();
    break;
case 2:
    credit.payCrdit();
    break;
case 3:
    check.payCheck();
    break;
}}

void Transaction::printTransaction(){
int answer;

cout << "How did you pay your order (Cash == 1, Credit ==> 2, Check ==> 3)? ";
cin >> answer;

cout << "Transaction date was " << transaction_date << endl;
switch(answer){

case 1:
    cash.printCash();
    break;
case 2:
    credit.printCredit();
    break;
case 3:
    check.printCheck();
    break;

}

}
