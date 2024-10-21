#include<iostream>
#include<vector>
using namespace std;

void display(int arr[],int n,int idx,int max){
       if(idx==n){
        cout<<max;
        return;
       };
       if(arr[idx]>max) max=arr[idx];
       display(arr,n,idx+1,max);
    
}
int main () {
     int arr[]={1,3,4,23,53,3,43,23,4,432,234,34};
     int n=sizeof(arr)/sizeof(arr[0]);
     display(arr,n,0,INT16_MIN);

     
}