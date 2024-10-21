// advantages of 2d vector
// 1.> increses row
// 2.> variable column

// implementation

#include<iostream>
using namespace std;
#include<vector>

void change2d(vector<vector<int>> &v){
    v[0][1]=234;
}
int main()
{
     // 1d vector
    // 2d vector==vector of vector
   

    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    vector<int> v2;
    v2.push_back(5);
    v2.push_back(6);

    vector<int> v3;
    v3.push_back(0);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);

    vector< vector <int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][1]<<" "; 
      change2d(v);
    cout<<v[0][1]<<" "; 

}