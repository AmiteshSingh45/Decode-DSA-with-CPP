#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subset_2(string ans,string original,vector<string>&v,bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }

    char ch=original[0];
    if(original.length()==1){
    if(flag==true)
    subset_2(ans+ch,original.substr(1),v,true);//left
    subset_2(ans,original.substr(1),v,true);//right
    return;
 }
    char dh=original[1];

    if(ch==dh){    // duplicate i.e:"aab"
    if(flag==true) subset_2(ans+ch,original.substr(1),v,true);//left
    subset_2(ans,original.substr(1),v,false);//right
    }

    else (ch!=dh);{ //not duplicate i.e: "aba"
    if(flag==true)
    subset_2(ans+ch,original.substr(1),v,true);//left
    subset_2(ans,original.substr(1),v,true);//right
    }

}

int main () {
    string str="aab";
    vector <string> v;

    subset_2("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

}



