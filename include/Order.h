#ifndef ORDER_H
#define ORDER_H
#include <ctime>

class Order
{

private:
    int id;
    int number;
    time_t time;
    double total;
    int orderStatus;

public:
    void createOrder();
    void updateOrder(int order_id, int orderStatus);
    void editOrder();
    void editOrder(int order_id);

}


#endif // ORDER_H
