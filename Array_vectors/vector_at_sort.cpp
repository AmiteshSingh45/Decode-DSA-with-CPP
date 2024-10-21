#include<iostream>
using namespace std;
#include<vector>
int main () {
vector <int> v;
v.push_back(4);
v.push_back(5);
v.push_back(65);
v.push_back(55);
v.push_back(7);
v.push_back(67);

// v.at(2)=6556;
// cout<<v.at(2);

for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}

cout<<endl;


sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}
}