#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main () {
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> ans;
    queue<int> q;
    
    // pushing neg ele idx to queue
    for(int i=0;i<n;i++){
        if(arr[i]<0){
        q.push(i);
    }
    }
    //
    int i=0;
    while(i+k<n){
        // ele pwhle wale window ka hai
        while(q.size()>0 && q.front()<i){
            q.pop();
        }
        //no neg ele in window
        if(q.size()==0 || q.front()>=i+k){ ans.push_back(0);}
        // neg ele is pre in window
        else{ ans.push_back(arr[q.front()]);}
        i++;
    }
    

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}