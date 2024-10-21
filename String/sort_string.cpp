#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main () {
    string s;
    cin>>s;
    sort(s.begin(),s.end());//sorting is done by its ASCII value...
    cout<<s;
}