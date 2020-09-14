#include<iostream>
using namespace std;
class Nguoi {
    char *HoTen;
    int NamSinh;
    public:
       Nguoi();
       Nguoi( char *ht, int ns):NamSinh(ns) {HoTen=strdup(ht);}
       ~Nguoi() {delete [ ] HoTen;}
       void An() const { cout<<HoTen<<" an 3 chen com \n";}
       void Ngu() const { cout<<HoTen<< " ngu ngay 8 tieng \n";}
       void Xuat() const;
       friend ostream& operator << (ostream &os, Nguoi& p);
};
class SinhVien : public Nguoi {
    char *MaSo;
    public:
       SinhVien();
       SinhVien( char *ht, char *ms, int ns) : Nguoi(ht,ns) {
          MaSo = strdup(ms);
       }
       ~SinhVien() {
          delete [ ] MaSo;
        }
       void Xuat() const;
};
void Nguoi::Xuat() const{
    cout << "Nguoi, ho ten: " << HoTen;
    cout << " sinh " << NamSinh;
    cout << endl;
}
void SinhVien::Xuat() const{
    cout << "Sinh vien, ma so: " << MaSo;
  //cout << ", ho ten: " << HoTen;
  //cout << ", nam sinh: " << NamSinh;
    cout << endl;
}
int main() {
    Nguoi p1("Le Van Nhan",1980);
    SinhVien s1("Vo Vien Sinh", "200002541",1984);
    cout << "1.\n";
    p1.An(); s1.An();
    cout << "2.\n";
    p1.Xuat(); s1.Xuat();
    s1.Nguoi::Xuat();
    cout << "3.\n";
    cout << p1 << "\n";
    cout << s1 << "\n";
    return 0;
}