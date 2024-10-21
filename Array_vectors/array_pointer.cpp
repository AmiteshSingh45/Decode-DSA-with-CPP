#include<iostream>
using namespace std;

int main() {
    int arr[]={3,6,7,45,76,4};
    int *ptr=arr;
    cout<<ptr<<"";
    for(int i=0;i<=5;i++){
        cout<<ptr[i]<<"";
    }
    cout<<endl;
    *ptr=8;//ptr[0]=8
    for(int i=0;i<=5;i++){
        cout<<ptr[i]<<"";
    }

}


