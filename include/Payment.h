#ifndef PAYMENT_H
#define PAYMENT_H
#include <ctime>
#include <iostream>

using namespace std;

class Payment
{
private:
    time_t paid_date;
    double amount;
public:
    void Pay();
    void printPayment();


};

#endif // PAYMENT_H
