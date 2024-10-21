#include<iostream>
#include<vector>
using namespace std;

void display(vector <int> &v3){
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
}
int main () {
vector <int> v1(4);
v1.push_back(1);
v1.push_back(4);
v1.push_back(5);
v1.push_back(8);

vector <int> v2(5);
v1.push_back(2);
v1.push_back(3);
v1.push_back(6);
v1.push_back(7);
v1.push_back(10);

vector <int> v3(9);
int i=0;
int j=0;
int k= 0;

while(i<v1.size() && j<v2.size()){
    if(v1[i]>v2[j]) {
        v3[k]=v2[j];
        j++; k++;
    }
    else{
        v3[k]=v1[i];
        i++; k++;
    }
}

display(v3);
}