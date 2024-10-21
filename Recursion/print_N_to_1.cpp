#include<iostream>
using namespace std;

int N_to_1(int n){
    cout<<n<<endl;
    if (n<0) return -1;
    else if(n==0 || n==1) return 1;
    else return N_to_1(n-1);
}
int main () {
    int n;
    cout<<"enter the n:";
    cin>>n;
    int print=N_to_1(n);
    
    
}