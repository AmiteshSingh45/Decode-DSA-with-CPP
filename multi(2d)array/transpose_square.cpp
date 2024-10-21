#include<iostream>
using namespace std;

int main () {
    int m;
    cout<<"enter the number of rows/column:";
    cin>>m;
    
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //transpose of square matrix
   
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            int temp=arr[i][j];// swap arr[i][j] and arr[j][i]
              arr[i][j]=arr[j][i];
              arr[j][i]=temp;         
        }
        cout<<endl;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

