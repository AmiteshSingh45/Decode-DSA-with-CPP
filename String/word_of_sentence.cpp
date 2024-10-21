#include <iostream>
#include <string>
#include<sstream>
using namespace std;

int main () {
    string str;
    getline(cin,str);
    stringstream ss;
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}