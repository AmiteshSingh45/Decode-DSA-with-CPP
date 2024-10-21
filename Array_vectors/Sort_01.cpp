#include<iostream>
#include<vector>
using namespace std;
void display (vector <int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
void sort01(vector <int> &v){
    int n=v.size();
int noz=0;
int now=0;
for(int i=0;i<=n-1;i++){
    if(i==0){
        noz++;
    }
    else{
        now++;
    }
}
for(int i=0;i<n;i++){
    if(i<noz) v[i]=0;
    else v[i]=1;
}

}
int main (){

vector <int> v;
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(1);
v.push_back(0);
v.push_back(0);
v.push_back(1);

sort01(v);
display(v);

 }