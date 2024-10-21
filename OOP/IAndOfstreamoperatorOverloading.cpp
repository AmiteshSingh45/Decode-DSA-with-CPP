#include<iostream>
using namespace std;

class person {
    string name;
    int age;
    public:
    person(){
        name="NULL";
        age=0;
    }

    //overloading >>
    friend ostream &operator <<(ostream &output,person &p);

    //overloading <<
    friend istream &operator >>(istream &input,person &p); 
};


 ostream &operator <<(ostream &output,person &p){
    output<<"what is hack"<<endl;
    output<<"my name is "<<p.name<<"my age is "<< p.age<<endl;
    return output;
 }

 istream &operator >>(istream &input,person &p){
    input>>p.name>>p.age;
    return input;
 }


 int main () {
    person Anil;

    cin>>Anil;
    cout<<Anil;
 }