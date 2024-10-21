#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> mp; // key , value
    pair<string,int> p1;
    p1.first="Amitesh";    // mp["Amitesh"]=1
    p1.second=1;           

   mp["Amitesh"]=1;

    pair<string,int> p2;
    p2.first="panditji";
    p2.second=2;

    pair<string,int> p3;
    p3.first="raghav";
    p3.second=3;

    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);

    for(pair<string,int> p:mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<mp.size()<<endl;

    mp.erase("raghav");

    for(pair<string,int> p:mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
     cout<<mp.size()<<endl;
}