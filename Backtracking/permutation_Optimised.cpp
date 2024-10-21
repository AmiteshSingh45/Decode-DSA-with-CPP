#include<iostream>
#include<unordered_set>
using namespace std;


void permutationOptimised(string &s,int idx){
   if(idx==s.size()-1){
    cout<<s<<" ";
    return;
   }
   unordered_set<char> set;  // if char is repeating in string...
   for(int i=idx;i<s.length();i++){
    if(set.count(s[i])) continue;

    set.insert(s[i]); // char is coming for the firsrt time  
    swap(s[idx],s[i]); // 
    permutationOptimised(s,idx+1);
    swap(s[idx],s[i]); //  backtracking..
   }
}
int main () {
    string s;
    cout<<"enter the string: ";
    cin>>s;
    
    permutationOptimised(s,0); // intially i=0
}
