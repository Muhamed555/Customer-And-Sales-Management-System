#include "OrderItem.h"

OrderItem::OrderItem(){

quantity = 0;
sale_price = 0;
}

OrderItem::OrderItem(double q, double s_p){

quantity = q;
sale_price = s_p;

}


OrderItem OrderItem::operator++(){

++quantity;

OrderItem o;
o.setQuantity(quantity);
return o;
}

OrderItem OrderItem::operator--(){

--quantity;

OrderItem o;
o.setQuantity(quantity);
return o;

}

OrderItem OrderItem::operator+=(double n){

quantity += n;

OrderItem o;
o.setQuantity(quantity);
return o;

}

OrderItem OrderItem::operator-=(double n){


quantity -= n;
OrderItem o;
o.setQuantity(quantity);
return o;
}

void OrderItem::setQuantity(double q){

quantity = q;
}



ostream& operator <<(ostream& COUT, const OrderItem& o){

COUT << "The quantity of the order is "<< o.quantity << endl;
COUT << "The sale price of the order is "<< o.sale_price << endl;
COUT << "----------------------------------------------" << endl;

return COUT;
}





