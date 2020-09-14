#pragma once
#include"DocGiaTreEm.h"
#include"DocGiaNguoiLon.h"
#include<vector>
class ThuVien{
    private:
       // Khai báo mảng 1 chiều chứa lớp CHA - Vì do có virtual nên nó sẽ đa hình sang được từng hàng con tương ứng 
       vector<DocGia *> DS_DocGia;// Bắt buộc chỗ này phải là con trỏ
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
        DocGia *x;// Khai báo con trỏ lớp cha
        switch(luachon){
            case 0: break;
            case 1:{
                x = new DocGiaTreEm;// Dùng thằng cha x new ra đối tượng con là DocGiaTreEm
                cout<<"\n\n\t\t NHAP THONG TIN DOC GIA"<<endl;
                x->Nhap();
                x->setter_KT(true);// đánh dấu thằng này là độc giả trẻ em
                DS_DocGia.push_back(x);// Thêm 1 đối tượng vào mảng độc giả

            }
            case 2:{
                x = new DocGiaNguoiLon;// Dùng thằng cha x new ra đối tượng con là DocGiaNguoiLon
                cout<<"\n\n\t\t NHAP THONG TIN DOC GIA"<<endl;
                x->Nhap();
                x->setter_KT(false);// đánh dấu thằng này là độc giả người lớn
                DS_DocGia.push_back(x);// Thêm 1 đối tượng vào mảng độc giả
            }   
        }

    }while(luachon != 0);
} 
void ThuVien::Xuat(){
    // Xuat danh sách thông tin độc giả
    for(int i = 0; i < DS_DocGia.size(); i++){
        if(DS_DocGia[i]->getter_KT() == true){
            cout<<"\n\n\t\t THONG TIN DOC GIA TRE EM THU "<< i + 1<<endl;
            DS_DocGia[i]->Xuat();// Xuất ra thông tin độc giả thứ i
        }
        if(DS_DocGia[i]->getter_KT() == false){
            cout<<"\n\n\t\t THONG TIN DOC GIA NGUOI LON THU "<< i + 1<<endl;
            DS_DocGia[i]->Xuat();// Xuất ra thông tin độc giả thứ i
        }
    }
}
int ThuVien::Tinh_Tong_Tien_Lam_The(){
    int sum = 0;
    // Duyệt DS độc giả 
    for(int i=0; i<DS_DocGia.size(); i++){
        sum = sum + DS_DocGia[i]->Tinh_Tien_Lam_The();    
    }
    return sum;
}