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


void QuickSort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pivot=partition(arr,si,ei);

    QuickSort(arr,si,pivot-1);
    QuickSort(arr,pivot+1,ei);
}

int main (){
    int arr[]={5,1,8,2,7,6,3,4,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}