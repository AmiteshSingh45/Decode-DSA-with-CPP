#include<iostream>
using namespace std;

class Student{
    public:
    int roll;
    string name;
    float gpa;
     
    Student(){ 
           // default constructor   
    }
    Student(string s,int r,float g){   //parameterised  constructor
         name=s;
         roll=r;
         gpa=g;
    }
     //we can make multiple constructor 
    Student(string s, int r){   // kitna bhi argument wala constructor bana sakte hai 
        name=s;
        roll=r;
     }

    Student(int r,float g,string s){  
         name=s;
         roll=r;
         gpa=g;
    }
};  

void change(Student& s){
    s.name="xyz";
}


int main () {
    Student s1("Amitesh Singh",39,7.8); 
    
    Student s2("Rohan Raj Singh",89);  // 2 argument wala constructor 

    Student s5(45,5.9,"xyz");

    
    Student s7=s1; // Deep copy
    Student s6(s1); //copy constructor --> deep copy


    change(s2); // shallow copy
    cout<<s2.name;
    
    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.roll<<endl; 
    cout<<s2.name<<"  "<<s1.roll<<endl; 
    cout<<s5.name<<" "<<s5.gpa<<" "<<s5.roll<<endl;


}