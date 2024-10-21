#include<iostream>
using namespace std;

int powerr(int a,int b){
    if(a==0) return -1;
    if(b==1) return a;

    return a*powerr(a,b-1);
      
}
int main () {
    int a;
    cout<<"enter the a:";
    cin>>a;

    int b;
    cout<<"enter the b:";
    cin>>b;

    int pow=powerr(a,b);

    cout<<pow<<endl;

    
}