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

void change(Cricketers* c){
    c->avg=77.2; //this is same as -->> (*c).avg=77.2
}

int main () {
    Cricketers c1("virat kohli",25000,55.2);
    Cricketers c2("Rohit Sharma",18000,47.8);

    Cricketers* p1=&c1;
    cout<<(*p1).runs<<endl;
    (*p1).avg=77.5;   //c1.avg

    // change(&c1);  // change by 
    // cout<<c1.avg;
    
}