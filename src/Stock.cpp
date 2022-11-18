#include "Stock.h"

Stock::Stock(){

producs_size =5;
products_count =0;


orders_size = 5;
orders_count = 0;

products = new Product[producs_size];
orders = new OrderP[orders_size];
}

Stock::Stock(int products_s, int orders_s){

producs_size = producs_size;
products_count =0;

orders_size = orders_s;
orders_count = 0;

products = new Product[producs_size];
orders = new OrderP[orders_size];
}

Stock::~Stock(){

delete [] products;
delete [] orders;
}
// ================================== Add Product ========================================================


void Stock::addProduct(){

    int id;
    string number;
    string name;
    double price;
    string type;

if(products_count < producs_size){

    cout << "Please enter the id of the product: ";
    cin >> id;

    cout << "Please enter the number of the product: ";
    cin >> number;

    cout << "Please enter the name of the product: ";
    cin >> name;

     cout << "Please enter the price of the product: ";
    cin >> price;

    cout << "Please enter the type of the product: ";
    cin >> type;


    Product *p = new Product(id, number, name, price, type);
    products[products_count++] = *p;
}}

// ================================== Edit Product ========================================================

void Stock::editProduct(){

int id;

if(products_count == 0){cout << "\n >>>>> There are no products to edit !" << endl;}

else{
cout << "Please enter the id of the product you're looking for: ";
cin >> id;
}
for(int i =0; i < products_count; i++){

 if(products[i].getID() ==  id){
    int id;
    string number;
    string name;
    double price;
    int type;

    cout << "Please enter new id of the product: ";
    cin >> id;
    products[i].setID(id);

    cout << "Please enter the new number of the product: ";
    cin >> number;
    products[i].setNumber(number);

    cout << "Please enter the new name of the products: ";
    cin >> name;
    products[i].setName(name);

    cout << "Please enter the new price of the product: ";
    cin >> price;
    products[i].setPrice(price);

    cout << "Please enter the new type of the product: ";
    cin >> type;
    products[i].setType(type);

 }}}


 // ================================== Delete Product ========================================================


 void Stock::deleteProduct(){

int id;
if(products_count == 0)cout << "\n >>>>>>> There are no products to delete ! \n";
else{
cout << "Please enter the id of the product you want to delete: ";
cin >> id;
}
bool deleted = false;

for(int i = 0; i < products_count; i++){
    if(products[i].getID() == id){

        if(i == products_count -1){

            products_count --;


        }else{

         products[i] = products[products_count - 1];
         products_count--;


        }
     deleted = true;
     break;
    }
    else cout << "\n>>>>>> This product doesn't exist! \n" <<endl;

    }

    if(deleted){ cout << "\n>>>>>> Customer has been deleted \n " << endl;}

}

 // ================================== Search Product ========================================================

 void Stock::searchProduct(){

int answer;
if(products_count == 0){cout << "\n >>>>> There are no products to search about !" << endl;}
 else{
 cout<<"Please enter the id of the product you're looking for: ";
 cin >> answer;
 }
 for(int i = 0; i < products_count; i++){

    if(products[i].getID() == answer){

        cout << products[i];

}
else{

    cout << "\n \t >>> Sorry This Product ID doesn't exist !" << endl;
}
}}


 // ================================== Print Total number of Product ===========================================


void Stock::totalProductsAndOrders(){
cout << "=========================================================" << endl;
cout << "Total number of products is  " << products_count << endl;
cout << "Total Number of orders is " << orders_count << endl;
cout << "=========================================================" << endl;
};


 // ================================== Print all products ===========================================


void Stock::printAllProducts(){

if(products_count == 0){cout << "\n >>>>> There are no products to display !" << endl;}

for(int i =0; i < products_count; i++){

cout << "=====================================" << endl;

cout << products[i] << endl;
}}

 // ================================== Add Orders products ===========================================

void Stock::addOrders(){

int answer_orders;
cout << "How many orders do you want to add: ";
cin >> answer_orders;
if(orders_count < orders_size){

    int id;
    int number;
    int status,orders_items;

    time_t time;
    double total;

    for(int i = 0; i < answer_orders; i++){

        cout << i + 1<< " - Enter the id of the order: ";
        cin >> id;
        cout << i + 1<< " - Enter the number of the order: ";
        cin >> number;
        cout << i + 1 << " - Enter the order status (0 == > New, 1 ==> Hold, 2 ==> Paid, 3 ==> Canceled): ";
        cin >> status;
        cout << i + 1<< " - What is the total amount of order: ";
        cin >> total;
        cout << i + 1 <<  " - What is the time of the order: ";
        cin >> time;
        cout << "---------------------" << endl;

        OrderP *o = new OrderP(id, number, time, total, status, answer_orders);
        orders[orders_count++] = *o;

    }}}

 // ================================== Add orders Items ===========================================

 void Stock::addOrderItems(){
int order_id;
if(orders_count == 0){cout << "\n >>>>> There are no orders to add to !" << endl;}
else{
cout << "Please enter the id of the order you want to add to: ";
cin >> order_id;
}
for(int i = 0; i < orders_count; i++){

    if(orders[i].getID() == order_id){
        orders[i].addOrderItems();
    }

}
 }

 // ================================== Print Orders ===========================================

 void Stock::printOrders(){

 for(int i = 0; i < orders_count; i++){

    orders[i].printOrder();

 }

 }

  // ================================== Add Transaction into an order ===========================================

void Stock::addTransactionOrder(){
int answer;

if(orders_count == 0){cout << "\n >>>>> There are no orders to make any transactions! " << endl;}

else {
    cout << "Please enter the id of the order you want to add to: ";
    cin >> answer;
}
for(int i =0; i < orders_count; i++){


    if(orders[i].getID() == answer){
        orders[i].addTransaction();
    }
}


}

  // ================================== Print Transactions of orders ===========================================

  void Stock::printTransactionOrder(){
  int answer;
  if(orders_count == 0) cout <<"\n \t >>>>>> There are no Payments to display! " << endl;
  else{

    cout << "What is the id of the order you want to display the payment details about: ";
    cin >> answer;
  }
  for(int i = 0; i < orders_count; i++){

    if(orders[i].getID() == answer){

        orders[i].printTransactin();
    }
  }

  }

   // ================================== Update order Status ===========================================

void Stock::updateOrder(){
int answer;
  if(orders_count == 0) cout <<"\n \t >>>>>> There are no orders to update ! " << endl;
  else{

    cout << "What is the id of the order you want to update its status: ";
    cin >> answer;
  }
  for(int i = 0; i < orders_count; i++){

    if(orders[i].getID() == answer){

        orders[i].updateOrder();
    }
  }
}
