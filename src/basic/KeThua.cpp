#include <iostream>
using namespace std;

// lop co so: Hinh
class Hinh {
   public:
      void XetChieuRong(int rong)
      {
         chieurong = rong;
      }
      void XetChieuCao(int cao)
      {
         chieucao = cao;
      }
   protected:
      int chieurong;
      int chieucao;
};

// day la lop ke thua: HinhChuNhat
class HinhChuNhat: public Hinh
{
   public:
      int tinhDienTich()
      { 
         return chieurong * chieucao; 
      }
};

int main(void)
{
   HinhChuNhat Hcn;
 
   Hcn.XetChieuRong(14);
   Hcn.XetChieuCao(30);

   // in dien tich cua doi tuong.
   cout << "Tong dien tich la: " << Hcn.tinhDienTich() << endl;

   return 0;
}