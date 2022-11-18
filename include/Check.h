#ifndef CHECK_H
#define CHECK_H
#include "Payment.h"

class Check : public Payment
{
private:
    string name;
    string bank_id;
public:
    void payCheck();
    void printCheck();

};

#endif // CHECK_H
