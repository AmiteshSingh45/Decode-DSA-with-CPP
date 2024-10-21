#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    public:
       Simple(int a,int b=9){
        data1=a;
        data2=b;
       }
       void printdata();
};

void Simple :: printdata(){
    cout<<"the value of data is: "<<data1<<" "<<data2;
}

int main () {
    Simple s1(4);
    s1.printdata();

    Simple s2(6,8);
    s2.printdata();
}