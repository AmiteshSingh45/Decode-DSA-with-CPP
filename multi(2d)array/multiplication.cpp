#include<iostream>
using namespace std;

int main () {
    int m;
    cout<<"enter the row of 1st matrix:";
    cin>>m;

    int n;
    cout<<"enter the cols of 1st matrix:";
    cin>>n;

    int p;
    cout<<"enter the row of 2nd matrix:";
    cin>>p;

    int q;
    cout<<"enter the cols of 2nd matrix:";
    cin>>q;

    if(n==p){
        int a[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
            cout<<endl;
        }

        int b[p][q];
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
            cout<<endl;
        }

        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                 res[i][j]=0;
                 for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                 }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j];
            }
            cout<<endl;
        }


    }
}