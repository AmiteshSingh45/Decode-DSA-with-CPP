#include<iostream>
using namespace std;

class c2;

class c1{
    int val1;
    public:
     void setvalue(int val){
        val1=val;
     }
     void display(){
        cout<<val1;
     }
     friend void exchange(c1&,c2&);
};

class c2{
    int val2;
    public:
     void setvalue(int a){
        val2=a;
     }
     void display(){
        cout<<val2;
     }
     friend void exchange(c1&,c2&);
};

void exchange(c1 &x ,   c2 &y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}


int main () {
    c1 oc1;
    oc1.setvalue(78);

    c2 oc2;
    oc2.setvalue(89);
    
    exchange(oc1,oc2);
    cout<<"the value of c1 and c2 is after exchanging ";    

    oc1.display();
    cout<<endl;
    oc2.display();
}