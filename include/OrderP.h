#ifndef ORDERP_H
#define ORDERP_H
#include <ctime>
#include <iostream>
#include "Transaction.h"
#include "OrderItem.h"

using namespace std;

class OrderP
{
private:
    OrderItem *orderItems;
    Transaction transaction;

    int id;
    int number;
    int status;
    int orders_size;
    int orders_count;


    time_t time;
    double total;




public:
    OrderP();
    OrderP(int i, int n,time_t time, double total, int s, int orders_s);
    ~OrderP();

    void createOrder();
    void updateOrder();
    void editOrder(int order_id);
    void addOrderItems();
    void printOrderItems();
    void printOrder();
    void addTransaction();
    void printTransactin();

    void setOrdersItems(int);

    friend istream& operator>>(istream& CIN, OrderP& o);
    friend ostream& operator<<(ostream& COUT, const OrderP& o);

    // Getters
    int getID();


};

#endif // ORDERP_H
