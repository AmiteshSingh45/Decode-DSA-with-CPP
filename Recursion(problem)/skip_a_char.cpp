#include<iostream>
using namespace std;

void rmvchar(string ans,string original){
 if(original.length()==0){
    cout<<ans<<endl;
    return;
}
char ch=original[0];
if(ch =='t') rmvchar(ans,original.substr(1));
else rmvchar(ans+ch,original.substr(1));      
}

int main () {
    string str="Amitesh singh";
    rmvchar("",str);
}