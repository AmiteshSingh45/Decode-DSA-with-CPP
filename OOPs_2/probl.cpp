#include<iostream>
using namespace std;

class cricketer{
    public:
    string name;
    int age;
    int no_match;
    int avgrun;
};

int main () {
    cricketer virat;
    virat.name="King";
    virat.age=33;
    virat.no_match=145;
    virat.avgrun=88;

    cricketer rohit;
    rohit.name="Hitman";
    rohit.age=35;
    rohit.avgrun=77;
    rohit.no_match=134;

    cricketer cricketers[2]={virat,rohit};
    for(int i=0;i<2;i++){
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].avgrun<<endl;
        cout<<cricketers[i].no_match<<endl;
        cout<<endl;
    }
}