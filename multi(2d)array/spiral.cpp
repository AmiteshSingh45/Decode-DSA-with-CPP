#include<iostream>
using namespace std;

int main () {
    int m;
    cout<<"enter the row number:";
    cin>>m;

    int n;
    cout<<"enter the cols number:";
    cin>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // spiral 
    int minr,minc,maxr,maxc;
    minr=0; minc=0; maxr=m-1; maxc=n-1;
    while(minr<=minc && maxr==maxc){
        //right
        for(int j=minc;j<=maxc;j++){
                 cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<"";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //left
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //up
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<"";
        }
        minc++;
    } 

  
}
