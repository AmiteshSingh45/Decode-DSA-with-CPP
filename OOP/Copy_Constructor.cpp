#include<iostream>
using namespace std;

class Number{
    int numb;
    public:
      Number(){
        numb=0;
      } // default constr..
      Number(int x){  // 
        numb=x;
      }
      Number(Number &obj){
         cout<<"Copy constructor called"<<endl;
         numb=obj.numb;
      }
      // vvi->> when there is no copy constructor is found , compiler supplies its own copy constructor.....
      void display(){
        cout<<"number is  "<<numb<<endl;
      }
};

int main () {
    Number x,y,z(8),z2;
    x.display();
    y.display();
    z.display();

    Number X(z); // copy constructor invoked
    X.display();
   
    z2=z;//  copy constructor will not invoked because z2 already ban chuka hai..

    Number z3=z; //copy constructor invoked  beacuse isi line me z3 bana hai....
}