#include<iostream>
using namespace std;
#include<vector>

int main () {
vector <int> v;
// capacity and size are two different things..
v.push_back(2);
cout<<v.capacity()<<endl;
v.push_back(6);
cout<<v.capacity()<<endl;
v.push_back(67);
cout<<v.capacity()<<endl;
v.push_back(45);
cout<<v.capacity()<<endl;
v.push_back(4);
v.push_back(5);
v.push_back(65);

// for printing all the elements
for (int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

v.pop_back();// after popping back size changes but capacity does not changes
cout<<endl;
for (int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}