#include<iostream>
#include<map>
using namespace std;


int main() {
    map<int,int> m;
    m[1]=30;
    m[2]=40;
    m[3]=98;
 
    for(auto x: m){
        cout<<x.first;
    }
    cout<<endl;
    for(auto x: m){
        cout<<x.second;
    }
}