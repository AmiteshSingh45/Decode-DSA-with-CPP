#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;   // by default 0 se initialise ho jata hai.....
    public:
          void setdata(void){
            cout<<"enter the id: "<<endl;
            cin>>id;
            count++;
          }
          void getdata(void){
            cout<<"the id of this employee is "<<id;
            cout<<" And this is employee number "<<count<<endl;
          }
          static void getcount(void){
            cout<<"the value of count is: "<<count<<endl;     // static member function
          }
};

int Employee::count;

int main () {
  Employee e1,e2,e3; // 3no object 1 hi count ko share kar rhe hai 

  e1.setdata();
  e1.getdata();
  Employee ::getcount(); // calling static function using class 


  e2.setdata();
  e2.getdata();
  Employee ::getcount();

  e3.setdata();
  e3.getdata();
  Employee ::getcount();

  
// static fuction me static variable ka hi access hota hai 
// static function sidha class se call hota hai 


}