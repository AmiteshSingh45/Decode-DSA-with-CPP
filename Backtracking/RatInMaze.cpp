#include<iostream>
#include<vector>
using namespace std;

int ans;
bool CanWeGo(vector<vector<int>>& grid,int n,int i,int j){
    return i>=0 and j>=0 and i<n and j<n and grid[i][j]==0;
}
void f(vector<vector<int>>& grid,int n,int i,int j){
    // base case
    if(i==n-1 and j==n-1){
        ans+=1;
        return;
    }
    grid[i][j]=2; // 2 means visited

    //left
    if(CanWeGo(grid,n,i,j-1)){
            f(grid,n,i,j-1);
    }

    //up
    if(CanWeGo(grid,n,i-1,j)){
            f(grid,n,i-1,j); 
    }

    //right
    if(CanWeGo(grid,n,i,j+1)){
             f(grid,n,i,j+1);
    }

    //down
    if(CanWeGo(grid,n,i+1,j)){
             f(grid,n,i+1,j);
    }

    grid[i][j]=0; //unvisited or backtrack

}
int RatInmaze(vector<vector<int>>& grid,int n){
    ans=0;
    f(grid,n,0,0);
    return ans;
}

int main () {
    vector<vector<int>> grid ={
        {0,0,1,0,0,1,0},
        {1,0,1,1,0,0,0},
        {0,0,0,0,1,0,1},
        {1,0,1,0,0,0,0},
        {1,0,1,1,0,1,0},
        {1,0,0,0,0,1,0},
        {1,1,1,1,0,0,0}
    };
    cout<<RatInmaze(grid,7);
}