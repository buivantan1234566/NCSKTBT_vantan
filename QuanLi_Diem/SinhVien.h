#pragma once
#include <iostream>
#include <string>
using namespace std;
class SinhVien {
    private:
      string ten;
      float DiemToan, DiemLy, DiemHoa;
    public:
      void Nhap();
      void Xuat();
      float TinhDiemTrungBinh();        

};
void SinhVien::Nhap(){
    fflush(stdin);
    cout<<"Nhap ho ten: ";
    getline(cin, this->ten);
    cout<<"Nhap diem toan: ";
    cin>>this->DiemToan;
    cout<<"Nhap diem ly: ";
    cin>>this->DiemLy;
    cout<<"Nhap diem hoa: ";
    cin>>this->DiemHoa;
}
void SinhVien::Xuat(){
    cout<<"Ho ten: "<<this->ten<<endl;
    cout<<"Diem toan: "<<this->DiemToan<<endl;
    cout<<"Diem ly: "<<this->DiemLy<<endl;
    cout<<"Diem hoa: "<<this->DiemHoa<<endl;
}
float SinhVien::TinhDiemTrungBinh(){
    return (DiemToan + DiemLy + DiemHoa)/3;
}