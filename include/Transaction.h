#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <ctime>
#include "Check.h"
#include "Credit.h"
#include "Cash.h"

class Transaction
{
private:
    Cash cash;
    Check check;
    Credit credit;
    time_t transaction_date;
public:
    void getOrder();
    void addTransaction();
    void printTransaction();



};

#endif // TRANSACTION_H
