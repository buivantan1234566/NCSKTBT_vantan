#include<iostream>
using namespace std;
class PhanSo{
   private:
      int tuso;
      int mauso;
   public:
      PhanSo();
      PhanSo(int t, int m);
      PhanSo(const int &a);
      ~PhanSo();
      void Nhap();
      void Xuat();
      void Set(int a, int b);
      int GetTu();
      int GetMau();
      void NghichDao();
      void RutGon();
      PhanSo PhepCong(PhanSo ps1);
      PhanSo PhepTru(PhanSo ps1);
      PhanSo PhepNhan(PhanSo ps1);
      PhanSo PhepChia(PhanSo ps1);
      int SoSanh(PhanSo ps1);
};
PhanSo::PhanSo(){
    tuso = 0;
    mauso = 1;
}
PhanSo::PhanSo(int t, int m){
    tuso = t;
    mauso = m;
}
PhanSo::PhanSo(const int &a){
    tuso = a;
    mauso = a;
}
PhanSo::~PhanSo()
{
}
void PhanSo::Nhap(){
    cout<<"\nNhap tu so:";
    cin>>tuso;
    do{
        cout<<"Nhap mau so: ";
        cin>>mauso;
        if(mauso == 0){
            cout<<"Xin nhap lai!";
        }
    }while(mauso == 0);
}
void PhanSo::Xuat(){
    if(tuso == 0){
        cout<<"ps = 0";
    }
    else if(mauso == 0){
        cout<<"Math error";      
    }
    else{
        cout<<tuso<<"/"<<mauso<<endl;
    }
} 
void PhanSo::Set(int a, int b){
    tuso = a;
    mauso = b;
}
int PhanSo::GetTu(){
    return this->tuso;
}  
int PhanSo::GetMau(){
    return this->mauso;
}
void PhanSo::NghichDao(){
    int temp;
    temp = tuso;
    tuso = mauso;
    mauso = temp;
}
int UCLN(int a, int b){
    while(a != b){
        if(a > b)
           a = a - b;
        else
           b = b - a;
    }
    return a;
}
void PhanSo::RutGon(){
    int a = UCLN(tuso, mauso);
    tuso = tuso/a;
    mauso = mauso/a;
}
PhanSo PhanSo::PhepCong(PhanSo ps2){
    return PhanSo(this->tuso*ps2.mauso + ps2.tuso*this->mauso, this->mauso*ps2.mauso);
}
PhanSo PhanSo::PhepTru(PhanSo ps2){
    return PhanSo(this->tuso*ps2.mauso - ps2.tuso*this->mauso, this->mauso*ps2.mauso);
}
PhanSo PhanSo::PhepNhan(PhanSo ps2){
    return PhanSo(this->tuso*ps2.tuso, this->mauso*ps2.mauso);
}
PhanSo PhanSo::PhepChia(PhanSo ps2){
    return PhanSo(this->tuso*ps2.mauso, this->mauso*ps2.tuso);
}
int PhanSo::SoSanh(PhanSo ps2){
    int x = this->tuso/this->mauso;
    int y = ps2.tuso/ps2.mauso;
    if (x < y) 
        return -1;
    else if (x > y)
        return 1;
    else 
        return 0;
}
int main(){
    PhanSo ps1, ps2, cong, tru, nhan, chia;
    // Nhập 2 phân số
    cout<<"Nhap phan so 1: ";
    ps1.Nhap();
    cout<<"Nhap phan so 2: ";
    ps2.Nhap();
    // Nghịch đảo 2 phân số
    cout<<"Nghich dao phan so 1: ";
    ps1.NghichDao();
    ps1.Xuat();
    cout<<"Nghich dao phan so 2: ";
    ps2.NghichDao();
    ps2.Xuat();
    //Cộng 2 phân số
    cong = ps1.PhepCong(ps2);
    cout<<"Cong = ";
    cong.RutGon();
    cong.Xuat();
    // Trừ 2 phân số
    tru = ps1.PhepTru(ps2);
    cout<<"Tru = ";
    tru.RutGon();
    tru.Xuat();
    // Nhân 2 phân số
    nhan = ps1.PhepNhan(ps2);
    cout<<"Nhan = ";
    nhan.RutGon();
    nhan.Xuat();
    // Chia 2 phân số
    chia = ps1.PhepChia(ps2);
    cout<<"Chia = ";
    chia.RutGon();
    chia.Xuat();
     
    int ss = ps1.SoSanh(ps2);
    switch (ss){
    case -1:
        cout << "\nPhan so 1 nho hon phan so 2";
        break;
    case 1:
        cout << "\nPhan so 1 lon hon phan so 2";
        break;
    case 0:
        cout << "\nPhan so 1 bang phan so 2";
        break;
    default:
        break;
    } 

    return 0;
}  