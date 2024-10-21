#include<iostream>
using namespace std;

class Student{
    public:
     string name;
     int roll;
     float gpa;
};

void print (Student s){
    cout<<s.name<<" "<<s.gpa<<" "<<s.roll<<endl;   
}

void change(Student s){
    s.name="xyz";
    s.gpa=8.90;
    s.roll=900;
}

int main () {
    Student s1;
    s1.name="Amitesh Singh";
    s1.gpa=7.6;
    s1.roll=39;
    
    // we can create multiple student
    Student s2;
    s2.name="kp singh";
    s2.gpa=7.5;
    s2.roll=17;

    Student s3;
    s3.name="Rohann Singh";
    s3.gpa=7.0;
    s3.roll=36;

    print(s1);
    change(s1);
    print(s1);  // nothing changes in s1 so it is pass by value...   pass by reference me change ho jata hai..

    cout<<endl;
    print(s2); 
    print(s3); 
}