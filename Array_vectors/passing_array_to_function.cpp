#include<iostream>
using namespace std;

void display(int arr[]){// (int *arr)//
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    return;
}
int main () {
    int arr[5]={1,4,6,7,8};
    display(arr);
}