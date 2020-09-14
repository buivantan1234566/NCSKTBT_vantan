#include"ThuVien.h"
int main(){
    ThuVien *x = new ThuVien;
    x->Nhap();
    x->Xuat();
    cout<<"Tong tien lam the: "<< x->Tinh_Tong_Tien_Lam_The();

    delete x;// Giaỉ phóng con trỏ
    system("pause");
    return 0;  
}