#include "OrderP.h"

OrderP::OrderP(){

total = 0;
orders_size = 5;
orders_count = 0;

orderItems = new OrderItem[orders_size];
}

OrderP::OrderP(int i, int n,time_t tim, double tot, int s, int order_s){

id = i;
number = n;
time = tim;
total = tot;
status = s;
orders_size = order_s;
orders_count = 0;

orderItems = new OrderItem[orders_size];

}

OrderP::~OrderP(){

delete [] orderItems;

}


int OrderP::getID(){
return id;

}
// ======================================== Update Order ============================================

void OrderP::updateOrder(){

cout << "What is the new status of the order(0 == > New, 1 ==> Hold, 2 ==> Paid, 3 ==> Canceled): ";
cin >> status;

};


// ======================================== Edit Order ============================================
void OrderP::editOrder(int order_id){

if (order_id == id){
 int choice;
 cout << "Which item do you want to edit? " << endl;
 cout << "1 == > ID  \n"
      << "2 == > Number \n"
      << "3 == > Total Amount \n"
      << "4 ==> Status \n"
      << "5 == > time \n"
      << "6 ==> ALL " << endl;
 cout << "Your choice: ";
 cin >> choice;

 switch(choice){
 case 1:
    cout << "\n The new ID is: ";
    cin >> id;
    break;
 case 2:
    cout << "\n The new number of the order is: ";
    cin >> number;
    break;
 case 3:
    cout << "\n The new total amount of the order is: ";
    cin >> total;
    break;
 case 4:
    cout << "\n The new status of the order is: ";
    cin >> status;
    break;
 case 5:
    cout << "The new time is: ";
    cin >> time;
    break;
 case 6:
     cout << "\n The new ID is: ";
     cin >> id;
     cout << "\n The new number of the order is: ";
     cin >> number;
     cout << "\n The new total amount of the order is: ";
     cin >> total;
     cout << "\n The new status of the order is: ";
     cin >> status;
     cout << "The new time is: ";
     cin >> time;

 default:
    cout << "\n  >>>>>> Sorry wrong choice! \n" << endl;

 }}}

// ======================================== Print Order Information ============================================

ostream& operator <<(ostream& COUT, const OrderP& o){

COUT << "================================================" << endl;
COUT << "The id of the order is "<< o.id << endl;
COUT << "The number of the order is "<< o.number << endl;
COUT << "The time of the order was "<< o.time << endl;
COUT << "The total amount of the order is "<< o.total << endl;
COUT << "The status of the order is "<< o.status << endl;
return COUT;
}

void OrderP::printOrder(){

cout<< "The id of the order is "<< id << endl;
cout << "The time of the order was "<< time << endl;
cout << "The total amount of the order is "<< total << endl;
switch(status){
case 0:
    cout << "The status of the order is New " << endl;
    break;
case 1:
    cout << "The status of the order is on Hold " << endl;
    break;
case 2:
    cout << "The status of the order is Paid" << endl;
    break;
case 3:
    cout << "The status of the order is Canceled" << endl;
    break;
default:
    cout << "The status of the order is unknown! (This may happend because you've entered wrong choice)" << endl;

}

for(int i =0; i < orders_count; i++){

    cout << orderItems[i];

}
cout <<"============================================" << endl;
}


// ======================================== Read Order Information ============================================

istream& operator >>(istream& CIN,  OrderP& o){


cout << "Enter the ID of the order: ";
CIN >> o.id;

cout << "Enter the number of the order: ";
CIN >> o.number;

cout << "Enter the total amount of the order: ";
CIN >> o.total;

cout << "Enter the if status the order: ";
CIN >> o.status;

cout << "Enter the time of the order: ";
CIN >> o.time;

return CIN;
}


// ======================================== Add OrderItems ============================================

void OrderP::addOrderItems(){
int orders_times;
cout << "How many items would you like to add into this order?" ;
cin >> orders_times;

if(orders_count < orders_size){


double sale_price;
double quantity;

        for(int i = 0; i < orders_times; i++){
            cout << "============================================================= " << endl;
            cout << "(" << i + 1 << ") " << "Please enter the sale price of the item: ";
            cin >> sale_price;

            cout << "(" << i + 1 << ") " << "Please enter the quantity price of the item: ";
            cin >> quantity;

            OrderItem *o = new OrderItem(quantity, sale_price);

            orderItems[orders_count++] = *o;

}}}


// ======================================== Print OrderItems ============================================

void OrderP::printOrderItems(){

    for(int i = 0; i < orders_count; i++){

        cout << orderItems[i];

    }

}


// ======================================== Add Transaction ============================================

void OrderP::addTransaction(){

transaction.addTransaction();

}

// ======================================= Print Transaction =========================================

void OrderP::printTransactin(){
cout << "-------------------------------------" << endl;
transaction.printTransaction();
cout << "\n " << endl;
}


