#include <iostream>
#include <string>
using namespace std;

int main () {
    int x=12345678;
    string s=to_string(x);
    int l=s.length();
    cout<<s<<endl;
    cout<<l;
}