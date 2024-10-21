#include<iostream>
#include<stack>
using namespace std;


int main (){
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pgi[n]; // previous greatest element index

    stack<int> st;
    pgi[0]==1;      // intially        // ans
    st.push(0);              //push

    for(int i=1;i<n;i++){
        // pop
        while(st.size()>0 &&  arr[st.top()]<=arr[i]){
            st.pop();
        }
        // Ans
        if(st.size()==0) pgi[i]=-1;
        else pgi[i]=st.top();
        //Push
        st.push(i);
    }

    for(int i=0;i<n;i++){
        pgi[i]=i-pgi[i];
    }

     for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }


}