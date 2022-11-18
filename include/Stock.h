#ifndef STOCK_H
#define STOCK_H
#include "Product.h"
#include <iostream>
#include "OrderP.h"

using namespace std;

class Stock
{
 private:
     Product *products;
     OrderP *orders;

     int producs_size;
     int products_count;

     int orders_size;
     int orders_count;

 public:
    ~Stock();
    Stock();
    Stock(int, int);
    void addProduct();
    void editProduct();
    void deleteProduct();
    void searchProduct();
    void totalProductsAndOrders();
    void printAllProducts();

    void addTransactionOrder();
    void printTransactionOrder();
    void addOrders();
    void printOrders();
    void addOrderItems();
    void updateOrder();
};

#endif // STOCK_H
