#include<iostream>
using namespace std;

int f(int n){
    if(n==0) return 1;

    int sum=0;
    for(int i=1;i<=6;i++){
        if(n-i<0) break;
        sum+=f(n-i);
    }
    return sum;
}

int main () {
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}

