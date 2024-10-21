#include<iostream>
#include<vector>
using namespace std;

void display(int arr[],int n,int idx){
       if(idx==n) return;
       cout<<arr[idx]<<" ";
       display(arr,n,idx+1);
}

void displayvector(vector <int> &v,int idx){
 if(idx==v.size()) return;
       cout<<v[idx]<<" ";
       displayvector(v,idx+1);
}
int main () {
     int arr[]={1,3,4,23,53,3,43,23,4,432,234,34};
     int n=sizeof(arr)/sizeof(arr[0]);
     display(arr,n,0);

     vector <int> v;
     for(int i=0;i<n;i++){
        v[i]=arr[i];
     }
     displayvector(v,0);
}