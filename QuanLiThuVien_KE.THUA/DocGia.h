#pragma once
#include<iostream>
using namespace std;
#include<string>
class DocGia{
    protected:
       string hoten;
       string ngaylapthe; // dd/mm/yy
       int sothangcohieuluc;
    public:
       void Nhap();
       void Xuat();   
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
