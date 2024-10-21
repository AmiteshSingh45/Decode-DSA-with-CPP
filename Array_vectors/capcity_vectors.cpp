#include<iostream>
using namespace std;
#include<vector>

int main () {
vector <int> v;
// capacity and size are two different things..
v.push_back(2);  // 1 1
v.push_back(6); // 2 2
v.push_back(67); // 3 4
v.push_back(45); // 4 4
v.push_back(4); // 5 8
v.push_back(5); // 6 8 
v.push_back(65); // 7 8 
v.push_back(2); // 8 8 
v.push_back(6); // 9 16 
v.push_back(67);
v.push_back(45);
v.push_back(4);
v.push_back(5);
v.push_back(65);
v.push_back(2);
v.push_back(6);
v.push_back(67);
v.push_back(45);
v.push_back(4);
v.push_back(5);
v.push_back(65);

cout<<"capacity is : "<<v.capacity()<<endl;
cout<<"size is  : "<<v.size()<<endl;


v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();


cout<<"capacity is : "<<v.capacity()<<endl;
cout<<"size is  : "<<v.size()<<endl;

}