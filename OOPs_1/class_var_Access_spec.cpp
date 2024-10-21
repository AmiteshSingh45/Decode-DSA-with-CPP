#include<iostream>
using namespace std;

class calculator{
    public:
    int a;    // Data member
    int b;  

    void add() {
        cout<<a+b;         // member function
    }
    void sub() {
        cout<<a-b;
    }
    
};

int main () {
    calculator calc;
    calc.a=10;
    calc.b=20;

    calc.add();
    calc.sub();

}