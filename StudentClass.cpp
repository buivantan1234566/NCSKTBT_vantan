#include<iostream>
#include<string>
#define MAX 10
using namespace std;
class Student{
    private:
       string name;
       int rollNo;
       int total;
       float perc;
    public:
       void getDetails(void);// Nhap
       void putDetails(void);// Xuat
};      
void Student::getDetails(void){
    fflush(stdin);
    cout<<"Enter name: "; // Nhập tên 
    getline(cin, name);
    cout<<"Enter roll number: "; // Nhập số
    cin>>rollNo;
    cout<<"Enter total marks outof 500: "; // Nhập tổng số điểm
    cin>>total;
    perc=(float)total/500*100;   
}
void Student::putDetails(void){
	cout<<"Name: "<<name<<"Roll number: "<<rollNo<<"Total: "<<total<<"Percentage: "<<perc;
}
int main(){
    Student student[MAX];
    int n, loop;

    cout<<"Enter total number of student: "; // Nhập số lượng học sinh
    cin>>n;

    for(loop=0; loop<n; loop++){
        cout<<"Enter details of student"<< (loop+1) <<":\n"; // Nhập thông tin chi tiết của sinh viên:
        student[loop].getDetails();
    }
    for(loop=0; loop<n; loop++){
        cout<<endl<<"Details of student"<<(loop+1)<<":\n"; // Thông tin sinh viên:
        student[loop].putDetails();
    }
    return 0;
}