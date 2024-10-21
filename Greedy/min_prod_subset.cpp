#include<iostream>
#include<vector>
using namespace std;

int minProduct(vector<int>& arr){
    int cp=0,cn=0,cz=0;
    int prod_poss=1;
    int prod_neg=1;
    int lar_neg=INT_FAST16_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){ cn++; prod_neg*=arr[i]; lar_neg=max(lar_neg,arr[i]);}
        if(arr[i]>0){ cp++; prod_poss*=arr[i];}
        if(arr[i]==0) cz++;    
    }
    if(cn==0){   // no negative number
        if(cz>0) return 0;
        else{
            int min=INT16_MAX;
            for(int i=0;i<arr.size();i++){
                if(arr[i]<min) min=arr[i];
            }
            return min;
        } 
    }
    else{   // negative number is present
        if(cn%2!=0){ //odd number of negative number is present
            return prod_neg*prod_poss;
        }
        else{  //even number of negative number is present
            return (prod_neg*prod_poss)/lar_neg;
        }
    }
}
int main(){
     vector<int> arr={-2,-3,1,4,-2,-5};
     cout<<minProduct(arr);
}