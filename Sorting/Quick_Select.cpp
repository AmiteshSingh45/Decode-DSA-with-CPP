#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei){
    int pivotele=arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[si]<=arr[i]) count++;
    }
    int pivotidx=si+count;
    swap(pivotele,arr[pivotidx]);


    int i=0,j=0;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotele) i++;
        if(arr[j]>pivotele) j--;
        else if(arr[i]>pivotele && arr[j]<=pivotele){
            swap(arr[i],arr[j]);
            i++; j--;
        }
    }
    return pivotidx;
}


int kthsmallest(int arr[],int si,int ei,int k){
    int pivot=partition(arr,si,ei);
    if(pivot==k-1) return arr[k-1];
    else if(pivot>k-1) return kthsmallest(arr,si,pivot-1,k);
    else return kthsmallest(arr,pivot+1,ei,k); 
   
}

int main (){
    int arr[]={5,1,8,2,7,6,3,4,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=1;
    cout<<kthsmallest(arr,0,n-1,k);
    
}