#pragma once
#include"DocGiaTreEm.h"
#include"DocGiaNguoiLon.h"
#include<vector>
class ThuVien{
    private:
       vector<DocGiaTreEm> DS_DocGiaTreEm;
       vector<DocGiaNguoiLon> DS_DocGiaNguoiLon;
    public:
       void Nhap();
       void Xuat();
       int Tinh_Tong_Tien_Lam_The();   
};
void ThuVien::Nhap(){
    int luachon;
    do{ 
        system("cls");
        cout<<"\n\n\t\t========== THU VIEN X ==========";
        cout<<"\n\t 0. Thoat";
        cout<<"\n\t 1. Doc gia tre em";
        cout<<"\n\t 2. Doc gia nguoi lon";
        cout<<"\n\n\t\t==========   END   ==========";
        cout<<"\nLua chon cua ban ? ";
        cin>>luachon;
        switch(luachon){
            case 0: break;
            case 1:{
                DocGiaTreEm x;// Khai báo đối tượng trẻ em để nhập thông tin
                cout<<"\n\n\t\t NHAP THONG TIN DOC GIA"<<endl;
                x.Nhap();
                DS_DocGiaTreEm.push_back(x);// Thêm đối tượng độc giả trẻ em x vào mảng vector độc giả trẻ em     
            }
            case 2:{
                DocGiaNguoiLon x;// Khai báo đối tượng ngưới lớn để nhập thông tin
                cout<<"\n\n\t\t NHAP THONG TIN DOC GIA"<<endl;
                x.Nhap();
                DS_DocGiaNguoiLon.push_back(x);// Thêm đối tượng độc giả trẻ em x vào mảng vector độc giả người lớn
            }   
        }

    }while(luachon != 0);
} 
void ThuVien::Xuat(){
    // Xuất danh sách thông tin độc giả trẻ em
    for(int i = 0; i < DS_DocGiaTreEm.size(); i++){
        cout<<"\n\n\t\t THONG TIN DOC GIA TRE EM THU "<< i + 1<<endl;
        DS_DocGiaTreEm[i].Xuat();
    }
    // Xuất danh sách thông tin độc giả người lớn
    for(int i = 0; i < DS_DocGiaNguoiLon.size(); i++){
        cout<<"\n\n\t\t THONG TIN DOC GIA NGUOI LON THU "<< i + 1<<endl;
        DS_DocGiaNguoiLon[i].Xuat();
    }
}
int ThuVien::Tinh_Tong_Tien_Lam_The(){
    int sum = 0;
    // Duyệt DS độc giả trẻ em
    for(int i=0; i<DS_DocGiaTreEm.size(); i++){
        sum = sum + DS_DocGiaTreEm[i].Tinh_Tien_Lam_The();    
    }
    // Duyệt DS độc giả người lớn
    for(int i=0; i<DS_DocGiaNguoiLon.size(); i++){
        sum = sum + DS_DocGiaNguoiLon[i].Tinh_Tien_Lam_The();    
    }
    return sum;
}