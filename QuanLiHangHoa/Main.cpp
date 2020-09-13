#include <iostream>
#include "Cart.h"
using namespace std;
int main()
{
    int billOption;
    Cart cart;
    Product product1(1, 300000, "Giay da");
    Product product2(2,60000,"Ao thun" );
    Product product3(1, 300000, "Giay vai");
    Product product4(3, 300000, "Quan kaki");
    Product product5(1, 100000, "Quan ong lue");
    cart.addProduct(product1);
    cart.addProduct(product2);
    cart.addProduct(product3);
    cart.addProduct(product4);
    cart.addProduct(product5);
    cout<<"Ban muon xuat hoa don?(nhap mot so khac 0 de xuat ra file)";
    cin>>billOption;
    if(billOption){
        cart.printBills("./src/quanlihanghoa/bills/temp.txt");
    }
    cart.displayBills();
 return 0;
}