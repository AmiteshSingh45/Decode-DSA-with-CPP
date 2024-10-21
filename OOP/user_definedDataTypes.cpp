#include<iostream>
using namespace std;

class Student{
    public:
     string name;
     int roll;
     float gpa;
};

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

    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.roll<<endl;   
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.roll<<endl;   
    cout<<s3.name<<" "<<s3.gpa<<" "<<s3.roll<<endl;  
}