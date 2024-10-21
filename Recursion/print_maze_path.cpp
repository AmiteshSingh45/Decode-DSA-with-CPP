#include<iostream>
using namespace std;


// numbering ulta hua hai 1 2 3
//                        2
//                        3
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways=rightways+downways;
}
// numbering ulta hua hai 3 2 1
//                        2
//                        1
int maze2(int row,int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightways=maze2(row,col-1);
    int downways=maze2(row-1,col);
    int totalways=rightways+downways;
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
    }
    printpath(sr,sc+1,er,ec,s+"R");//right
    printpath(sr+1,sc,er,ec,s+"D");//down
   
}
int main () {
    cout<<maze(1,1,4,4)<<endl;
    printpath(1,1,4,4,"");
    cout<<maze2(4,4)<<endl;


}