#include <iostream>
using namespace std;
#include "SinhVien.h"
int main(){
    SinhVien sv;
    sv.Nhap();
    sv.Xuat();
    float DTB = sv.TinhDiemTrungBinh();
    cout<<"Diem Trung Binh: "<<DTB<<endl;
    return 0;
}