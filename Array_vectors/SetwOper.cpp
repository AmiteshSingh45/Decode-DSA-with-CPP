#include<iostream>
#include<iomanip>
using namespace std;

int main () {
    cout<<setw(20)<<setfill('*')<<"Svnit"<<setw(20)<<setfill('*')<<"Surat"<<endl;
    double numb=3.12;
    cout<<fixed<<setprecision(3)<<" "<<numb<<setprecision(4)<<" "<<numb<<endl;
    cout<<setprecision(5)<<numb;
}