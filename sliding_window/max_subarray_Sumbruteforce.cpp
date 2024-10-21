#include<iostream>
using namespace std;

int main () {
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;

    int maxSum=INT16_MIN;
    int maxidx=-1;
    for(int i=0;i<=n-k;i++){ // n-k-1 time loop is executing
            int sum=0;
            for(int j=i;j<i+k;j++){ // ktime
                sum+=arr[j];
            }
            if(maxSum<sum) {
                maxSum=sum;
                maxidx=i;
            }
    }
    //T.C=0(nk)
    cout<<maxSum<<endl;
    cout<<maxidx; 
}