#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

bool cmp(int a,int b){
    return a>b; 
}

ll mincostbreakgrid(int n,int m,vector<ll> &vertical,vector<ll> &horizontal){
    sort(vertical.begin(),vertical.end(),cmp);
    sort(horizontal.begin(),horizontal.end(),cmp);
    int verticalcount=1,horizontalcount=1;
    int h=0,v=0;
    ll ans=0;
    while(h<horizontal.size() and v<vertical.size()){
        if(vertical[v]>horizontal[h]){
            ans+=vertical[v]*v;
            v++; // v pointer goes to its next largest..
            h++;  // after cutting vertically horizontal block increases
        }
        else{
            ans+=horizontal[h]*h;
            h++; // v pointer goes to its next largest..
            v++;  // after cutting  horizontaly vertical block increases
        }
    }
    while(h<horizontal.size()){
            ans+=horizontal[h]*h;
            h++; 
            v++;
    }
    while(v<vertical.size()){
        ans+=vertical[v]*v;
            v++; 
            h++;
    }
    return ans;

}

int main () {
    int n,m;
    cin>>m>>n;
    vector <ll> horizontal,vertical;
    for(int i=0;i<m-1;i++){
        int x;
        cin>>x;
        vertical.push_back(x);
    }

    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        horizontal.push_back(x);
    }

    cout<<mincostbreakgrid(n,m,vertical,horizontal);

}