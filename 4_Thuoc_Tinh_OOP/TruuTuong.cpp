#include <iostream>
using namespace std;
class A{
   public:
      // khai bao constructor
      A(int i = 0)
      {
        tong = i;
      }
      // dữ liệu mà ta nhìn thấy với bên ngoài
      void congThem(int motso)
      {
          tong += motso;
      }
      // dữ liệu mà ta nhìn thấy với bên ngoài
      int tinhTong()
      {
          return tong;
      };
   private:
      // dữ liệu mà bí ẩn với bên ngoài
      int tong;
};
int main( ){
   A a;
   
   a.congThem(15);
   a.congThem(25);
   a.congThem(35);

   cout << "Tong gia tri la: " << a.tinhTong() <<endl;
   return 0;
}