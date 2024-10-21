#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> dp;
int f(int i,int j,vector<int> &arr){
    if(i==j or i+1==j) return 0;

    int ans=INT16_MAX;
    if(dp[i][j]!=-1) return dp[i][j];
    for(int k=i+1;k<=j-1;k++){
        ans=min(ans,f(i,k,arr)+f(k,j,arr)+arr[i]*arr[k]*arr[j]);
    }
    return dp[i][j]=ans;
}
int main () {
   int n;
   cout<<"enter n: "<<endl;
   cin>>n;

   dp.resize(100000,vector<int>(1000000,-1));

   vector<int> arr(n);
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    arr.push_back(x);
   }

   f(0,n-1,arr);
}