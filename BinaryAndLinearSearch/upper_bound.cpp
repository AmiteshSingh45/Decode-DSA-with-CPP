#include<iostream>
using namespace std;

int main () {
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int target=17;
    int n=9;
    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            cout<<arr[mid]+1;//changes
            flag=true; 
            break;  }
        else if(arr[mid]>target) high=mid-1;
        else if(arr[mid]<target) low=mid+1;
    }
    if(flag==false) cout<<arr[low];//changes

    
}