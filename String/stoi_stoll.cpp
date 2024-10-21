#include<iostream>
using namespace std;

int main () {
    string str="123456";//for not big integer
    int x=stoi(str);
    cout<<x<<endl;
    cout<<x*2<<endl;
    cout<<endl;
    // for large integer 
    string strr="12345678987654332";
    long long y=stoll(strr);
    cout<<y<<endl;


}