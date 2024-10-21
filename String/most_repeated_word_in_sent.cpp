#include <iostream>
#include <string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    string str="i am a studedent who is  who learning DSA  am from raghav is sir mentor";
    // getline(cin,str);
    stringstream s(str);
    string temp;
    vector <string> v;
    while(s>>temp){
        v.push_back(temp);
    }
    int n=v.size();
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    int maxcount=1;
    int count=1;
    for(int i=0;i<n;i++){
       if(v[i]==v[i+1]){count++;}
       else count=1;
       maxcount=max(maxcount,count);
    }


    count=1;
    for(int i=0;i<n;i++){
       if(v[i]==v[i+1]){count++;}
       else count=1;
       
       if(count==maxcount) {
        cout<<v[i]<<" "<<maxcount<<endl;
    }
    }
      }