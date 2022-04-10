#include "Item.h"
#include <iostream>
using namespace std;

// 4. Implement Default Constructor Implementation
Item::Item()
{
  itemCode = 0;
  unitPrice = 0;
  discount = 0;
}
// 5. Implement Overloaded Constructor Implementation
Item::Item(int pItemCode,float pUnitPrice)
{
  itemCode = pItemCode;
  unitPrice = pUnitPrice;
}
// 6. Implement Destructor (display "Destructor Called")
Item::~Item()
{
  if(itemCode == 0 && unitPrice == 0 && discount == 0)
  {
    cout<<"Destructor Called myItem object "<<endl;
  }
  else 
  {
    cout<<"Destructor Called myItem2 object "<<endl;
  }
}
void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}
