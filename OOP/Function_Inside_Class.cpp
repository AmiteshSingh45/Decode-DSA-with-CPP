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
    Cricketers c2("Rohit sharma",18000,47.8);

    c1.print();
}