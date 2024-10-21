#include<iostream>
using namespace std;
#include<vector>

int main () {
vector <int> v;//declaration of vectors.. need not to mention size
//  this is 0 size array //



// inserting or input do not use []
v.push_back(2);// capcity=1
v.push_back(6);//capcity=2  // if array is full then it will increase it to double its size
v.push_back(67);//capcity=4
v.push_back(45);//capcity=4

// if you e=want to update or access then you can use []
cout<<v[0]<<endl;




}