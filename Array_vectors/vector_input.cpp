#include<iostream>
using namespace std;
#include<vector>

// 1> if we know the size then we can do input same as array 
//   2.> v.push_back()

int main () {
vector <int> v;

for (int i=0;i<5;i++){
    int x;
    cin>>x;
    v.push_back(x);
}


for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
}


}