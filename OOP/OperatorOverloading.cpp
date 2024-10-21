#include<iostream>
using namespace std;

class Increase{
    int x;
    public:
     Increase(){
        x=10;
     }
     void display(){
        cout<<x;
     }
     // urany operator (isme koi bhi argument pass nahi kiya jata)
     void operator ++(){
        x=x+10;
     }

     // urany operator agar freind fnc se kare to isme 1 argument pass kiya jata hai
};


int main () {
    Increase inc;
    ++inc;  // calling 

    inc.display();



}