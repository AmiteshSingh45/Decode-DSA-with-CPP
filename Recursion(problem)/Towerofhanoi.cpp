#include<iostream>
using namespace std;

void hanoi(int n,char s,char h,char d){
    if(n==0) return;
    hanoi(n-1,s,d,h);//source,destination,helpher
    cout<<s<<"->"<<d<<endl;
    hanoi(n-1,h,s,d);//helpher,source,destination
}


int main () {
    int n=3;
    hanoi(n,'A','B','C');//A=sourcce,B=helpher,C=destination
}