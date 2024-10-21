#include<iostream>
#include<list>
using namespace std;


int main () {
    list<int> list1(7);//empty list of size 7
    list<int> list2;

    list2.push_back(10);
    list2.push_back(12);
    list2.push_back(16);
    list2.push_back(19);
    list2.push_back(105);
    list2.push_back(124);
    list2.push_back(165);
    list2.push_back(106);

    list<int> :: iterator iter;
    // iter =list2.begin();
    // cout<<*iter;
    // iter++;

    for(iter=list2.begin();iter!=list2.end();iter++){
          cout<<*iter<<" ";
    }



}
