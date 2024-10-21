#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bucketsort(float arr[],int n){
    // step 1 create bucket
    vector<vector<float>> bucket(n,vector<float> ());
    // step 2 inserting element in to vector
    for(int i=0;i<n;i++){
        int idx=arr[i]*n;
        bucket[idx].push_back(arr[i]);
    }

    // sort indivisual buckets
    for(int i=0;i<n;i++){
        if(!bucket[i].empty()){
        sort(bucket[i].begin(),bucket[i].end());
    }
    }

    // combine all the elements
    int  k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k]=bucket[i][j];
            k++;
        }
    }


}

int main () {
    float arr[]={0.13,0.45,0.12,0.89,0.75,0.63,0.85,0.39};
    int size=sizeof(arr)/sizeof(arr[0]);

    bucketsort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}