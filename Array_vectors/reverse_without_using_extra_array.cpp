#include<iostream>
using namespace std;
#include<vector>

void display(vector <int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}



int main () {
vector <int> v;
v.push_back(1);
v.push_back(27);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(16);
v.push_back(17);

display(v);

int i=0;
int j=v.size()-1;


while(i<=j) 
{
int temp=v[i];
v[i]=v[j];
v[j]=temp;
i++; 
j--;
}

display(v);

}








