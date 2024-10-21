#include<iostream>
using namespace std;

class Cricketers{
public:
    string name;
    int runs;
    float avg;

    Cricketers(string name,int runs,float avg){
        this->name=name;
        this->avg=avg;
        this->runs=runs;
    }

    void print() {
        cout<<this->name<<" "<<this->avg<<" "<<this->runs;
    }
};

int main () {
    Cricketers c1("virat kohli",25000,55.2);
    Cricketers* c2=new Cricketers ("Rohit sharma",18000,47.8);   // Dynamically allocation 

    cout<<c2->avg<<" "<<c2->name<<" "<<c2->runs<<" ";
}