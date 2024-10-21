#include<iostream>
using namespace std;

class Student{
    string name;
    int age;
    public: 
      Student(string Name,int age){  
        name="Amitesh";
        age=17;     
    }
    Student(string name){  //overloading funxctiom
        name="Rohan";
        age=0;
    }
};

int main () {
    Student s1();
}