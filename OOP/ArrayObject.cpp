#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
       void setdata(int v1,int v2){
        a=v1;
        b=v2;
       }

       void setdataSum(Complex o1,Complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
       } 
       
       void printNumber(){
        cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
       } 
};

int main () {
    
    Complex c1,c2,c3;

    c1.setdata(3,5);
    c1.printNumber();

    c2.setdata(12,50);
    c2.printNumber();

    c3.setdataSum(c1,c2);
    c3.printNumber();

}