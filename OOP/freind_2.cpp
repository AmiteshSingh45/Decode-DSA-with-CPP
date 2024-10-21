#include<iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator{
    public:
      int Add(int a,int b){
        return a+b;
      }
      
      int SumRealComplex(Complex ,Complex );  // function declaration
      int SumImgComplex(Complex ,Complex );  // function declaration 
};

class Complex{
    int a,b;
    // indivisually declaring the freind function
    // friend int Calculator ::SumRealComplex (Complex ,Complex );
    // friend int Calculator ::SumIMgComplex (Complex ,Complex );

    // Alter -> Declaring the entire calculator class as freind
    friend class Calculator;
    public:
       void setNumber(int n1,int n2){
        a=n1;
        b=n2;
       }

       void getNumber(){
           cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
       }     
};

int Calculator::SumRealComplex (Complex o1,Complex o2){   // function defination
        return (o1.a + o2.a);
}

int Calculator::SumImgComplex (Complex o1,Complex o2){   // function defination
        return (o1.b + o2.b);
}

int main () {
   Complex o1,o2;
   o1.setNumber(3,7);
   o2.setNumber(6,9);

   Calculator calc;
   int res=calc.SumRealComplex(o1,o2);
   int resI=calc.SumImgComplex(o1,o2);
   cout<<res<<endl;
   cout<<resI;
}