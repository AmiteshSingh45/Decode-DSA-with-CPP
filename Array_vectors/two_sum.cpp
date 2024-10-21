#include<iostream>
using namespace std;
#include<vector>
int main () {
    int x;
    cout<<"enter target:";
    cin>>x;
  cout<<endl;
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    vector <int> v;
    cout<<"enter the array element:";
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }
    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}