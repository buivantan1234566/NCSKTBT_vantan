#include<iostream>
#include<string>
using namespace std;
class Product // Mặt hàng
{
    private:
        int id, cost;
        string name;
    public:
        int getId();
        Product(int id, int cost, string name);
        bool equalTo(Product product);
        void displayBill();
        void printBillToFile();
        string toString();
};
int Product::getId(){
    return this->id;
}
Product::Product(int id, int cost, string name){// construct argument
    this->id = id;
    this->cost = cost;
    this->name = name;
}
void Product::displayBill(){
    cout<<this->toString()<<endl;
}
string Product::toString(){
    return"id: "+ std::to_string(id)+ ", name: "+name + ", cost:"+ std::to_string(cost);
}
bool Product::equalTo(Product product){
    return this->id == product.getId();
  }