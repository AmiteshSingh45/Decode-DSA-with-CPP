#include<iostream>
using namespace std;
#include<vector>


void display(vector <int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


void reversepart(int i,int j,vector <int> &v){
    while(i<=j){
        int t=v[i];
        v[i]=v[j];
        v[j]=t;
        i++; j--;
    
}
return;
}

int main () {
int k;
cout<<"enter k:";
cin>>k;
vector <int> v;
v.push_back(1);
v.push_back(27);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(16);
v.push_back(17);

display(v);
int n= v.size();
if(k>n) k=k%n;
reversepart(0,n-k-1,v);
reversepart(n-k,n-1,v);
reversepart(0,n-1,v);

display(v);

}