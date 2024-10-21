#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main () {
    // string s="Amiteshsiingh";
    // int max=0;
    // int n=s.length();
    // for(int i=0;i<n;i++){
    //  
    //     int count=1;
    //     for(int j=i+1;j<n;j++){
    //         if(s[i]==s[j]) count++;
    //     }
    //     if(count>max) max=count;
    //  }


    //   for(int i=0;i<n;i++){
    //     char ch=s[i];
    //     int count=1;
    //     for(int j=i+1;j<n;j++){
    //         if(s[i]==s[j]) count++;
    //     }
    //     if(count==max) cout<<ch<<" "<<max<<endl;
    //  }

    string s="leetcode";
    vector <int> v(26,0);
    int n=s.length();
    for(int i=0;i<n;i++){
        int asci=int(s[i]);
        v[asci-97]++;
    }
    int maxx=0;
    for(int i=0;i<n;i++){
        if(v[i]>maxx) maxx=v[i]; 
    }
    for(int i=0;i<n;i++){
        if(v[i]==maxx) {
            cout<<char(i+97)<<" "<<maxx<<endl;
        }
    }  
} 