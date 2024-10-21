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
    //printing the transpose....
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // storing the transpose array 
    int trans[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[i][j]=arr[j][i];
        }
     }
     // printing the stored transpose array
  for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
}

cout<<"reversing the transpose matrix:::";

for(int k=0;k<n;k++){
    int i=0; int j=n-1;
    while(i<j){
        int temp=trans[k][i];
        trans[k][i]=trans[k][j];
        trans[k][j]=temp;
    }
}

  for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
}
}