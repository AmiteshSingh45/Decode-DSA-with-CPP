#include<iostream>
using namespace std;
#include<vector>

int main () {
   vector <int> v;
   for (int i =0; i<6;i++){
    int x;
    cin>>x;
    v.push_back(x);
   }
   for (int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
   }

   cout<<endl;


   for(int i=v.size()-1;i>=0;i--){
    cout<<v[i]<<" ";
   }
}

