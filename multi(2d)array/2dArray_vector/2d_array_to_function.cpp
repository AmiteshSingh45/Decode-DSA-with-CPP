#include<iostream>
using namespace std;

void change(int arr[]){
    arr[1]=12;
}

void change2d(int brr[2][3]){
    brr[2][2]=345;
}
int main () {
    int arr[3]={1,2,3};
    cout<<arr[1]<<endl;
    change(arr);
    cout<<arr[1]<<endl;


    // in 1d array we need not to mention size while passing into function
    // but in 2d array we have to mention size while passing into function

    int brr[2][3]={1,2,34,5,6,78};
    cout<<brr[2][2]<<endl;
    change2d(brr);
    cout<<brr[2][2]<<endl;

}