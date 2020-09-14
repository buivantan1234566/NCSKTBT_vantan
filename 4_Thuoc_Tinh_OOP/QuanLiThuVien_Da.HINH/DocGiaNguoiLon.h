#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"DocGia.h"
class DocGiaNguoiLon : public DocGia{
    private:
       string CMND;
    public:
       void Nhap();
       void Xuat();
       int Tinh_Tien_Lam_The();   
};
void DocGiaNguoiLon::Nhap(){
    DocGia::Nhap();
   fflush(stdin);
    cout<<"Nhap so CMND: ";
    getline(cin, CMND);
}
void DocGiaNguoiLon::Xuat(){
    DocGia::Xuat();
    cout<<"Chung minh nhan dan: "<<CMND<<endl;
}
int DocGiaNguoiLon::Tinh_Tien_Lam_The(){
    return sothangcohieuluc * 10000;
}