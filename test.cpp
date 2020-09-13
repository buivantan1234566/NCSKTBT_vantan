#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Movie{
	private:
		string name;
        int as, cs;
        double ap, cp, per, ga, donated, sale;
	public:
	    void inPut();
		void outPut();
		float grossAmount();
		float amountDonated();
        float netSale();	
};
void Movie::inPut(){
	fflush(stdin);
	cout << "Enter the name of movie: ";
    getline(cin, name);
    cout << "Enter the price of an adult ticket: ";
    cin >>ap;
    cout << "Enter the price of a child ticket: ";
    cin >>cp;
    cout << "Enter the number of adult tickets sold: ";
    cin >>as;
    cout << "Enter the number of child tickets sold: ";
    cin >>cs;
    cin.ignore();
    cout <<"Enter the percent of donated: ";
    cin>>per;
}
void Movie::outPut(){
	for(int i=0; i<=50; i++)
    {
 	   if(i%2!=0) cout <<"_"; 
 	   else cout <<"*";
    }
    cout<<endl; cout<<endl;
    cout <<setw(35)<<setfill('.')<<left<<"Movie name: "<<setw(15)<<setfill(' ')<<right<<name<<endl;
    cout <<setw(35)<<setfill('.')<<left<<"Number of Tickets Sold: "<<setw(12)<<setfill(' ')<<right<<as+cs<<endl;
    cout <<setw(35)<<setfill('.')<<left<<"Gross Amount: "<<setw(4)<<setfill(' ')<<right<<"$"<<setw(8)<<setfill(' ')<<right<<ga<<endl;
    cout <<setw(35)<<setfill('.')<<left<<"Percentage of Gross Amount Donated:"<<setw(12)<<setfill(' ')<<right<<setprecision(2)<<fixed<<per<<"%"<<endl;
    cout <<setw(35)<<setfill('.')<<left<<"Amount Donated: "<<setw(4)<<setfill(' ')<<right<<"$"<<setw(8)<<setfill(' ')<<right<<donated<<endl;
    cout <<setw(35)<<setfill('.')<<left<<"Net Sale: "<<setw(4)<<setfill(' ')<<right<<"$"<<setw(8)<<setfill(' ')<<right<<sale<<endl;
}
float Movie::grossAmount(){
	return ap*as+cp*cs;
}
float Movie::amountDonated(){
	return donated=ga*per/100;
}
float Movie::netSale(){
	return sale=ga-donated;
}
int main(){
	Movie mv;
	mv.inPut();
	mv.grossAmount();
    mv.amountDonated();
    mv.netSale();
    mv.outPut();
}