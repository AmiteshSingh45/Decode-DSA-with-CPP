#include<iostream>
using namespace std;

int power(int x,int n){
    if(n==1) return x;
    if(n==0) return -1;
    if(n%2==0) return power(x,n/2)*power(x,n/2);
    else return x*power(x,n/2)*power(x,n/2);
   
}

int main () {
    cout<<power(3,3);
}