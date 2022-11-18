#include <iostream>
#include "Person.h"
#include "Customers.h"
#include "Stock.h"
#include "OrderP.h"

using namespace std;

int main()
{

Customers c;
Stock s;

bool keep = true;


while(keep){
    int answer;
    cout << "\n \t \t \t  >> Welcome To The Customer And Sales Management System << \n" << endl;
    cout << "\t \t \t \t \t  Made By MohamedElsayed :) \n" << endl;
    cout << "\t (1) Data Entry " << endl;
    cout << "\t (2) Sales Process " << endl;
    cout << "\t (3) Print " << endl;
    cout << "\t (4) Exit The System " << endl;
    cout << "\n Your answer: ";
    cin >> answer;

    switch(answer){
    case 1:
        int answer_entry;
        cout << "\n \t (1) Add new customer " << endl;
        cout << "\t (2) Edit an existed customer " << endl;
        cout << "\t (3) Delete an existed customer " << endl;
        cout << "-----------------------------------" << endl;
        cout << "\t (4) Add new product " << endl;
        cout << "\t (5) Edit an existed product " << endl;
        cout << "\t (6) Search a product " << endl;
        cout << "\t (7) Delete an existed product " << endl;
        cout << "------------------------------------" << endl;
        cout << "\t (8) Add a new order" << endl;
        cout << "\t (9) Add orderItems into an existed order" << endl;


        cout << "\n Your answer: ";
        cin >> answer_entry;
        switch(answer_entry){
        case 1:
            c.addCustomer();
            break;
        case 2:
            c.editCustomer();
            break;
        case 3:
            c.DeleteCustomer();
            break;
        case 4:
            s.addProduct();
            break;
        case 5:
            s.editProduct();
            break;
        case 6:
            s.searchProduct();
            break;
        case 7:
            s.deleteProduct();
        case 8:
            s.addOrders();
            break;
        case 9:
            s.addOrderItems();
            break;


        }
        break;

    case 2:
        int sales_answer;
        cout <<"\n \t (1) Pay Order & Transaction" << endl;
        cout << "\t (2) Update Order " << endl;
        cout << "\n Your answer: ";
        cin >> sales_answer;
        switch(sales_answer){
    case 1:
        s.addTransactionOrder();
        break;
    case 2:
        s.updateOrder();
        break;

        }

    break;

    case 3:
        int print_answer;
        cout << "\n \t (1) Print All Customers" << endl;
        cout << "\t (2) Print The Total Number Of Products & orders" << endl;
        cout << "\t (3) Print All Products " << endl;
        cout << "\t (4) Print All Orders" << endl;
        cout << "\t (5) Print Payment details & transactions of a certain order " << endl;
        cout << "\n You answer: ";
        cin >> print_answer;
        switch(print_answer){
            case 1:
                c.Print();
                break;
            case 2:
                s.totalProductsAndOrders();
                break;
            case 3:
                s.printAllProducts();
                break;
            case 4:
                s.printOrders();
                break;
            case 5:
                s.printTransactionOrder();
                break;

        }
        break;
    case 4:
        keep = false;
        cout << "\n \t >>>>> Thank you for using our system :) " << endl;
        break;
    default:
        cout << "\n >>>>>>> Sorry wrong choice!" << endl;

    }





}

  return 0;
}
