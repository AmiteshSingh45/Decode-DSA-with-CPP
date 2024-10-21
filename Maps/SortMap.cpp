#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int cmp1(pair<int,int> a,pair<int,int> b){
    return a.first<b.first;
}

int cmp2(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}

int main (){
    unordered_map<int,int> mp;

    int n;
    cout<<"enter the number of ele you want to insert in map: ";
    cin>>n;

    cout<<"enter the values: "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }

    vector< pair<int,int> > v(mp.begin(),mp.end());
    
    // sorting on the basis of key
    sort(v.begin(),v.end(),cmp1);
    
    cout<<"key"<<"  "<<"value"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
  

    // sorting on the basis of value
    sort(v.begin(),v.end(),cmp2);
    cout<<"key"<<"  "<<"value"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }


    

}