#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
       void setNumber(int n1,int n2){
        a=n1;
        b=n2;
       }
       void getNumber(){
           cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
       }
       friend Complex sumComplex(Complex o1,Complex o2);
};

Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}

int main () {
    Complex c1,c2,sum;
    c1.setNumber(2,5);
    c1.getNumber();

    c2.setNumber(4,7);
    c2.getNumber();

    sum = sumComplex(c1,c2);
    sum.getNumber();
}