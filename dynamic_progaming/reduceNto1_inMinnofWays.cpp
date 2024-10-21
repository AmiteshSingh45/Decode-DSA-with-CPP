#include<iostream>
#include<vector>
#define inf INT_MAX 
using namespace std;

int f(int i,vector<int>& dp){
    if(i==1) return 0;
    if(i==2 || n==3) return n;i
    if(dp[i]!=-1) return dp[i]; 
    return dp[i]=1 + min ({f(i-1,dp) , (i%2==0) ? f(i/2,dp):inf , (i%3==0) ?f(i/3,dp):inf});
}

int main (){
    int n;
    cout<<"enter n";
    cin>>n;
    vector<int> dp(n,-1);
    cout<<f(n,dp);
}