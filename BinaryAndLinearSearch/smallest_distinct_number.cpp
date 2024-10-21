#include<iostream>
using namespace std;

int main () {
    int arr[9]={0,1,2,3,4,6,7,8,9};
    int n=9;
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=i){
    //         cout<<i<<endl;   //linear search
    //         break;
    //     }
    // }
   //binary search
   int low=0;
   int high=n-1;
   int ans=-1;
   while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==mid){
        low=mid+1;
    }
    else{
      ans=mid;
        high=mid-1;
    }
   }
   cout<<ans;

}








