#include<iostream>
using namespace std;

class marks{
    int intmark;
    int extmark;
    public:
       marks(){
        intmark=0;
        extmark=0;
       }
       marks(int x,int y){
        intmark=x;
        extmark=y;
       }
       void display(){
        cout<<intmark<<" "<<extmark<<endl;
       }
       // operator overloading......
       marks operator+(marks m){
        marks temp;
        temp.intmark=intmark+m.intmark;
        temp.extmark=extmark+m.extmark;
        return temp;
       }
};
int main () {
    marks m1(10,20),m2(30,40);

    marks m3= m1+m2;
    m3.display();
}

