#include<iostream>
#include<stack>
using namespace std;


int main() {
    string s="79+4*8/3-";

    stack<int> val;
    

    for(int i=0;i<s.length();i++){
        // check if s[i] is digits 0-9
        if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);
        else { // s[i] is +,-,*,/
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            if(s[i]=='+')  val.push(val1+val2);
            else if(s[i]=='-')  val.push(val1-val2);
            else if(s[i]=='*')  val.push(val1*val2);
            else if(s[i]=='/')  val.push(val1/val2);
        }
    }
    cout<<val.top()<<endl;
    cout<<(7+9)*4/8-3;
}