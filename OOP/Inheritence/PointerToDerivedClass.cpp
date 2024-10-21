#include<iostream>
using namespace std;

class BaseClass{
    public:
      int var_base;
      void display(){
        cout<<"Displaying Base class variable var_base :"<<var_base<<endl;
      }
};

class DerivedClass: public BaseClass{
    public:
      int var_derived;
      void dislay(){
        cout<<"Dispaying base class variable var_derived :"<<var_base<<endl;
        cout<<"Dispaying derived class variable var_derived :"<<var_derived<<endl;
      }
};

int main () {   
    BaseClass *base_class_pointer;
    BaseClass objbase;

    BaseClass obj_derived;
    base_class_pointer=&obj_derived;
}