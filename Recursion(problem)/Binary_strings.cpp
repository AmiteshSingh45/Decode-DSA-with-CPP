#include<iostream>
#include<string>
using namespace std;

void binary(string ans,int n){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    binary(ans+"0",n-1);//left
    if(ans=="" || ans[ans.length()-1]=='0') binary(ans+"1",n-1);//right  // to not generate consecutive 1s
    
}

int main() {
    int n=3;
    binary("",n);
}

