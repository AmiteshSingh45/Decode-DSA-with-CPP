#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
        void setvalue(int val){
            data=val;
        }
    friend void add(X,Y);
};

class Y{
    int num;
    public:
        void setvalue(int val){
            num=val;
        }
    friend void add(X,Y);
};


void add(X a, Y b){
    cout<<"Adding of these two number gives "<<a.data+b.num;
}

int main () {
    X a1;
    a1.setvalue(7);

    Y b1;
    b1.setvalue(17);

    add(a1,b1);
}