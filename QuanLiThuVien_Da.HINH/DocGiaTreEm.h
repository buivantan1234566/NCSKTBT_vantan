#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"DocGia.h"
class DocGiaTreEm : public DocGia{
    private:
       string hotenNDD;
    public:
       void Nhap();
       void Xuat();
       int Tinh_Tien_Lam_The();    
};
void DocGiaTreEm::Nhap(){
    DocGia::Nhap();

    fflush(stdin);
    cout<<"Nhap ho ten nguoi dai dien: ";
    getline(cin, hotenNDD);
}
void DocGiaTreEm::Xuat(){
    DocGia::Xuat();
    cout<<"Ho ten nguoi dai dien: "<<hotenNDD<<endl;
}
// phương thức tính tiền làm thẻ của độc giả trẻ em = sothangcohieuluc * 5000
int DocGiaTreEm::Tinh_Tien_Lam_The(){
    return sothangcohieuluc * 5000;
}