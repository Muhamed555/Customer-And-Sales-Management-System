#ifndef CASH_H
#define CASH_H
#include "Payment.h"

class Cash : public Payment
{
private:
    double cashValue;
public:
    void payCash();
    void printCash();

};

#endif // CASH_H
