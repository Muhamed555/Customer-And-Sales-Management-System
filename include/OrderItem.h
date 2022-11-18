#ifndef ORDERITEM_H
#define ORDERITEM_H
#include <iostream>

using namespace std;

class OrderItem
{
private:
    double sale_price;
    double quantity;
public:
    OrderItem(double, double);
    OrderItem();
    void updateQuantity(double);
    OrderItem operator ++();
    OrderItem operator --();
    OrderItem operator +=(double n);
    OrderItem operator -=(double n);
    friend ostream& operator <<(ostream& COUT, const OrderItem& o);

    void printQuantity();

    void setQuantity(double q);


};

#endif // ORDERITEM_H
