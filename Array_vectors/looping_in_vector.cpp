#include<iostream>
using namespace std;
#include<vector>

int main () {
vector <int> v;
v.push_back(2);
v.push_back(8);
v.push_back(6);
v.push_back(2);
v.push_back(5);
v.push_back(8);
v.push_back(2);
v.push_back(4);

// int x=2;
// int idx=-1;
// for(int i=0;i<v.size();i++){
//     if (v.at(i)==x){
//         idx=i;
//     }
// }

// cout<<"element "<< x  <<"  found at index "<<idx<<endl;

int idx=-1;
for(int i=v.size()-1;i>0;i--){
    if(v[i]==2){
        idx=i;
        break; 
} 
    }
cout<<"found at index "<<idx<<endl;

}