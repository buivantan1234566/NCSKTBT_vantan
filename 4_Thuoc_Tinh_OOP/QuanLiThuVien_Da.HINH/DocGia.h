#pragma once
#include<iostream>
using namespace std;
#include<string>
class DocGia{
    protected:
       string hoten;
       string ngaylapthe; // dd/mm/yy
       int sothangcohieuluc;
       bool KT;// true: Trẻ em, false: Người lớn
    public:
       virtual void Nhap();// Phương thức ảo Nhập thông tin độc giả
       virtual void Xuat();// Phương thức ảo Xuất thông tin độc giả
       virtual int Tinh_Tien_Lam_The() = 0;

       // getter & setter KT

       bool getter_KT(){// Trả về dữ liệu
          return KT;
       } 
       void setter_KT(bool kt){// Cập nhập dữ liệu
          KT = kt;
       }
};
void DocGia::Nhap(){
    fflush(stdin);
    cout<<"Nhap ho ten doc gia: ";
    getline(cin, hoten);
    cout<<"Nhap ngay thanh lap the (dd/mm/yy): ";
    getline(cin, ngaylapthe);
    cout<<"Nhap so thang co hieu luc: ";
    cin>>sothangcohieuluc;
}
void DocGia::Xuat(){
    cout<<"Ho ten doc gia: "<<hoten<<endl;
    cout<<"Ngay thanh lap the (dd/mm/yy): "<<ngaylapthe<<endl;
    cout<<"So thang co hieu luc: "<<sothangcohieuluc<<endl;
}
