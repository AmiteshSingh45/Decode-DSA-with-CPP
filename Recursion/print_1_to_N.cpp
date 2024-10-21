#include<iostream>
using namespace std;

int _1_to_N(int i,int n){
    if (i>n) return 0;
    cout<<i<<endl;
    return _1_to_N(i+1,n);
    
}
int main () {
    int n;
    cout<<"enter the n:";
    cin>>n;
    int print=_1_to_N(1,n); 
    
}