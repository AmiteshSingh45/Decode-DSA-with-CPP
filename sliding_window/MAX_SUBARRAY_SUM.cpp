#include<iostream>
using namespace std;

int main () {
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxSum=INT16_MIN;
    int prevSum=0;
    int maxidx=0;
    for(int i=0;i<k;i++){
        prevSum+=arr[i];
    }

    maxSum=prevSum;
    
    int i=1;
    int j=k;
    while(j<n){
        int currsum=prevSum+arr[j]-arr[i-1];
        if(maxSum<currsum){
           maxSum=currsum;
            maxidx=i;
        }
        prevSum=currsum;
        i++; j++;
    }
    //T.C=0(n)
    cout<<maxSum<<endl;
    cout<<maxidx; 
}