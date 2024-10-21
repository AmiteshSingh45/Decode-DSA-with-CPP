#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
    public:
      void input() {
        cout<<"Enter the real part: ";
        cin>>real;
        cout<<"enter the imaginary part: ";
        cin>>img;
      }
      void output() {
        cout<<real<<" +"<<" i"<<img;
      }

      complex operator +(complex obj){
        complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
      }
};


int main () {
    complex c1,c2,sum;

    c1.input();
    c2.input();

    sum=c1+c2;
    sum.output();
}