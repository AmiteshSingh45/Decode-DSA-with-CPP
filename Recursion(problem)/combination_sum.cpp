#include<iostream>
#include<vector>
using namespace std;

int combination(int arr[],vector <int>&v,int n,int target,int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return 0;
    }
    if(target<0) return -1;

    for(int i=idx;i<n;i++){ // idx isley taki ans me repetation na ho sake like : 2 3 4
                                 //                                               3 2 4   //both are same things
        v.push_back(arr[i]);
        combination(arr,v,n,target-arr[i],i);
        v.pop_back();
    }
}

 

int main() {
    int arr[]={2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    vector <int> v;
    combination(arr,v,n,8,0);

}