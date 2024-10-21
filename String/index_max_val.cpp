#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    string arr[] ={"0123","0023","456","00182","940","2901"};
    int maxx=stoi(arr[0]);
    int n=6;
    // int maxs=arr[0];
    for(int i=0;i<n;i++){
        if(stoi(arr[i])>maxx) {
            maxx=stoi(arr[i]);  
    //         maxs=arr[i];
    // }
   
    
    }
    cout<<maxx<<endl;
    // cout<<maxs<<endl;
}