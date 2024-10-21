#include<iostream>
#include<queue>
using namespace std;


int main(){
    int arr[]={10,45,67,-2,-56,-4,-1,0,5,4,3,1};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
    
}