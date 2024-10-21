#include<iostream>
#include<vector>
using namespace std;

int c=0;

int inversion(vector<int> &a,vector<int> &b){
    int count=0,i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]) {
            count+=(a.size()-i);
        }
        else{
            i++;
        }
    }
}

void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0;
    int j=0;
    int k=0;

    while(i<a.size() && j<b.size()){
        if(a[i]>=b[j]){
            res[k]=b[j];
             j++; k++;
        }
        else {
            res[k]=a[i];
            i++; k++;
        }
    }

    if(i==a.size()){
        while(j<b.size()){
        res[k]=b[j];
        j++; k++;
    }
    }

     if(j==b.size()){
        while(i<a.size()){
        res[k]=a[i];
        i++; k++;
    }
    }
}

void mergeSort(vector<int> &v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2, n2=n-n/2;
    vector<int> v1(n1);
    vector<int>v2(n2);

    for(int i=0;i<n1;i++){
        v1[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        v2[i]=v[i+n1];
    }
    
    mergeSort(v1);
    mergeSort(v2);
    
    c+=inversion(v1,v2);
             //t.c=0(nlogn)//
    merge(v1,v2,v);

}


int main () {
    int arr[]={5,1,3,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    vector<int> v(arr,arr+n);
   
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<c;
}