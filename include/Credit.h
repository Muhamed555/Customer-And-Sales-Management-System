#ifndef CREDIT_H
#define CREDIT_H
#include <ctime>
#include "Payment.h"


class Credit : public Payment
{
private:
    string number;
    time_t expire_date;
    string type;
public:
    void payCrdit();
    void printCredit();

};

#endif // CREDIT_H
