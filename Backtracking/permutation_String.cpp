#include<iostream>
#include<sstream>
using namespace std;

void permutation(string s,string ans){
    if(s.size()==0){
          cout<<ans<<" ";
    }

    for(int i=0;i<s.size();i++){
        char ch=s[i];
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        permutation(left+right,ans+ch);
    }
}

int main (){
    string s;
    cout<<"enter the string: ";
    cin>>s;
    
    string ans="";
    permutation(s,ans);

}