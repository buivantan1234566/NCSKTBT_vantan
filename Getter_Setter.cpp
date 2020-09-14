#include<iostream>
#include<string>
using namespace std;
class HocSinh{
    private:
       string ten;
       float diem;
    public:
        void Xuat(){
            cout<<"Ten: "<<ten<<endl;
            cout<<"Diem: "<<diem<<endl;
        }
        HocSinh(string t, float d){
            ten = t;
            diem = d;
        }
        string Getter_Ten(){
            return ten;
        }
        void Setter_Ten(string t){
            ten = t;
        }
};
int main(){
    HocSinh hs1("Tan", 9);
    hs1.Xuat();
    hs1.Setter_Ten("Thao");
    cout<<"Ten hoc sinh hs1 la: "<< hs1.Getter_Ten()<<endl;
    return 0;

}