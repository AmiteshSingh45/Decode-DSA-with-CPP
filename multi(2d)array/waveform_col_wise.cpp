#include<iostream>
using namespace std;

int main () {
    int m;
    cout<<"enter the number of rows:";
    cin>>m;

    int n;
    cout<<"enter the number of column:";
    cin>>n;

    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

   // wave form
   for(int j=0;j<n;j++){
      if(j%2==0){
         for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
         }
         
      }
      else{
         for(int i=n-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
         }
      }
   }

}