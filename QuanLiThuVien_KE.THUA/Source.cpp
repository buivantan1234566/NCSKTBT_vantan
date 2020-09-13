#include"ThuVien.h"
int main(){
    ThuVien *x = new ThuVien;
    x->Nhap();
    x->Xuat();

    delete x;// Giaỉ phóng con trỏ
    system("pause");
    return 0;  
}