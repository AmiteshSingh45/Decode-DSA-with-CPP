#include<iostream>
using namespace std;

int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 1;
    if(sr==er && sc==ec) return 0;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways=rightways+downways;
}
int main () {
    cout<<maze(0,0,2,1);

}