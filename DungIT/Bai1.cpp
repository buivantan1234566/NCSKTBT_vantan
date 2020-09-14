#include <iostream>
#include <string.h>
using namespace std;
class SinhVien{
	private:
		string mssv;
        string hoten;
        string gioitinh;
        float CNXHKH, KTCT, KNM, LTNC, GT2, VLDT;
    public:
	    void Nhap();
	    void Xuat();
	    float TinhDTBHe10();
	    void TinhDTBHe4();
};
void SinhVien::Nhap(){
	fflush(stdin);
    cout<<"Nhap ma so sinh vien: ";
    getline(cin, this->mssv);
    cout<<"Nhap ho ten sinh vien: ";
    getline(cin, this->hoten);
    cout<<"Nhap gioi tinh: ";
    getline(cin, this->gioitinh);
    cout<<"Nhap diem mon Chu Nghia Xa Hoi Khoa Hoc : ";
    cin>>this->CNXHKH;
    cout<<"Nhap diem mon Kinh Te Chinh Tri: ";
    cin>>this->KTCT;
    cout<<"Nhap diem mon Ki Nang Mem: ";
    cin>>this->KNM;
    cout<<"Nhap diem mon Lap Trinh Nang Cao: ";
    cin>>this->LTNC;
    cout<<"Nhap diem mon Giai Tich 2: ";
    cin>>this->GT2;
    cout<<"Nhap diem mon Vat Ly Dien Tu: ";
    cin>>this->VLDT;
}
void SinhVien::Xuat(){
	cout<<"Ma So Sinh Vien: "<<this->mssv<<endl;
    cout<<"Ho ten: "<<this->hoten<<endl;
    cout<<"Gioi tinh: "<<this->gioitinh<<endl;
    cout<<"Chu Nghia Xa Hoi Khoa Hoc: "<<this->CNXHKH<<endl;
    cout<<"Kinh Te Chinh Tri: "<<this->KTCT<<endl;
    cout<<"Ki Nang Mem: "<<this->KNM<<endl;
    cout<<"Lap Trinh Nang Cao: "<<this->LTNC<<endl;
    cout<<"Giai Tich 2: "<<this->GT2<<endl;
    cout<<"Vat Ly Dien Tu: "<<this->VLDT<<endl;
}
float SinhVien::TinhDTBHe10(){
	int somon = 6;
    return (this->CNXHKH+this->KTCT+this->KNM+this->LTNC+this->GT2+this->VLDT)/somon;
}
void SinhVien::TinhDTBHe4(){
	float arr[6] = {this->CNXHKH, this->KTCT, this->KNM, this->LTNC, this->GT2, this->VLDT};
    for(int i=0; i<6; i++){
	 if(arr[i] >= 9.5 && arr[i] <= 10)
	     arr[i] = 4;
	 else if(arr[i] >= 8.5 && arr[i] <= 9.4)
	     arr[i] = 3.8;
	 else if(arr[i] >= 8 && arr[i] <= 8.4)
	     arr[i] = 3.5;
	 else if(arr[i] >= 7 && arr[i] <= 7.9)
	     arr[i] = 3;
	 else if(arr[i] >= 6 && arr[i] <= 6.9)
	     arr[i] = 2.5;
	 else if(arr[i] >= 5.5 && arr[i] <= 5.9)
	     arr[i] = 2;
 	 else if(arr[i] >= 4.5 && arr[i] <= 5.4)
	     arr[i] = 1.5;
	 else if(arr[i] >= 4 && arr[i] <= 4.4)
	     arr[i] = 1;
	 else if(arr[i] >= 2 && arr[i] <= 3.9)
	     arr[i] = 0.5;
	 else if(arr[i] >= 0 && arr[i] <= 1.9)
	     arr[i] = 0;									    
    } 
    float DTBHe4 = ((arr[0] + arr[1] + arr[2])*2 + (arr[3] + arr[4] + arr[5])*3)/15;
	cout<<"Diem trung binh he 4: "<<DTBHe4<<endl;
}
int main(){
	SinhVien sv;
	sv.Nhap();
	sv.Xuat();
	float DTBHe10 = sv.TinhDTBHe10();
	cout<<"Diem trung binh he 10: "<<DTBHe10<<endl;
	sv.TinhDTBHe4();
	return 0;
}