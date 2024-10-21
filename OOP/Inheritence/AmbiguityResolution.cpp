#include<iostream>
using namespace std;

class base1{
    public:
      void greet(){
        cout<<"How are you"<<endl;
      }
};

class base2{
    public:
       void greet(){
        cout<<"Kaise ho"<<endl;
       }
};

class derived: public base1,public base2{
    public:
        int a;

      // to resolve ambiguity 
      void greet(){
        base1::greet();   // define the greet function from where it is derived....
      }
};

class A{
    public:
      void say(){
        cout<<"hello world.."<<endl;
      }
};

class B:public A{
    int a;
    public:
      void say(){
        cout<<"Hello world hey its me.."<<endl;
      }

};

int main () {
    //Ambiguity 1
    // base1 obj1;
    // base2 obj2;
    // derived d;

    // obj1.greet();
    // obj2.greet();
    
    // // it will create ambiguity as from which class i should derive greet function.......
    // d.greet();

    A a;
    a.say();

    // it overwrite the derived fuction say  to its own function say..
    B b;
    b.say();


}