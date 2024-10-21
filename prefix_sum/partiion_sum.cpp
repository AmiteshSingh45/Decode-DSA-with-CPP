#include<iostream>
using namespace std;


int main () {
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=false;
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    //check if any x exists such that sum of first x element equals to sum of others..
    int idx=-1;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            flag=true;
            idx=i;
            break;
        }
    }
    if(flag==true) cout<<"partion can be doneat index"<< idx;
    else cout<<"partion cannot be done";
}