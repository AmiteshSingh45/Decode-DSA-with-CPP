#include<iostream>
#include<cmath>
using namespace std;

void isprime(int n){
    bool flag=false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) flag=true; 
    }
    if(flag==false) cout<<"prime number";
    else cout<<"not a prime number";
}

int main () {
    int n;
    cout<<"enter the number";
    cin>>n;

    isprime(n);

}