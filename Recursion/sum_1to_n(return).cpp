#include<iostream>
using namespace std;

int sum_1to_n(int n){
    if(n==0) return 0;
     if(n<0) return -1;
     if(n==1) return 1;
    return n+sum_1to_n(n-1);

}
int main () {
    int n;
    cout<<"enter the n:";
    cin>>n;

    int summ=sum_1to_n(n);
    cout<<summ<<endl;
}