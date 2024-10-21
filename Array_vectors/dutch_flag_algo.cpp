#include<iostream>
#include<vector>
using namespace std;
void display (vector <int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

void swap(int a,int b){
    int temp;
    temp=a;
    a=b; b=temp;
}
void sortdutch(vector <int> &v){
    int n=v.size();
    int low=0; int mid=0; int high=n-1;
    while(mid<=high){
        if(v[mid]==2) {swap(v[mid],v[high]);
        high--;}
        else if(v[mid]==0) { swap(v[mid],v[low]);
        mid++; low++;}

        else if(v[mid]==1){ mid++; }

    }
    return;
}
int main (){

vector <int> v;
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(2);
v.push_back(0);
v.push_back(2);
v.push_back(1);

sortdutch(v);
display(v);

}



