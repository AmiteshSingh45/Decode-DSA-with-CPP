#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> grid;

vector<int> dx{-2,-1,-2,-1,+2,+1,+2,+1};
vector<int> dy{+1,+2,-1,-2,+1,+2,-1,-2};

bool isitSafe(vector<vector<int>> &grid,int i,int j,int n){
    return i>=0 and j>=0 and i<n and j<n and grid[i][j]==-1;
}

void display(vector<vector<int>> &grid,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}
void f(vector<vector<int>> &grid,int i,int j,int n,int count){
    
    if(count==n*n-1){
        //last position
        grid[i][j]=count;
        display(grid,n);
        cout<<"****\n";
        grid[i][j]=-1;
        return;
    }

    for(int k=0;k<8;k++){
        if(isitSafe(grid,i+dx[k],j+dy[k],n)){
               grid[i][j]=count;
               f(grid,i+dx[k],j+dy[k],n,count+1);
               grid[i][j]=-1;
        }
    }
    //for i and j we have 8 position
    // for every position we can go if it is safe..

    // if(isitSafe(grid,i-2,j+1,n)){
    //     grid [i-2][j+1]= count;
    //     f(grid,i-2,j+1,n,count+1);
    //     grid [i-2][j+1]= -1;    // backtracking
    // }

    // if(isitSafe(grid,i-2,j-1,n)){
    //     grid [i-2][j-1]= count;
    //     f(grid,i-2,j-1,n,count+1);
    //     grid [i-2][j-1]= -1;    // backtracking
    // }

    // if(isitSafe(grid,i+2,j+1,n)){
    //     grid [i+2][j+1]= count;
    //     f(grid,i+2,j+1,n,count+1);
    //     grid [i+2][j+1]= -1;    // backtracking
    // }
    
    // if(isitSafe(grid,i+2,j-1,n)){
    //     grid [i+2][j-1]= count;
    //     f(grid,i+2,j-1,n,count+1);
    //     grid [i+2][j-1]= -1;    // backtracking
    // }

    // if(isitSafe(grid,i+1,j+2,n)){
    //     grid [i+1][j+2]= count;
    //     f(grid,i+1,j+2,n,count+1);
    //     grid [i+1][j+2]= -1;    // backtracking
    // }

    // if(isitSafe(grid,i-1,j+2,n)){
    //     grid [i-1][j+2]= count;
    //     f(grid,i-1,j+2,n,count+1);
    //     grid [i-1][j+2]= -1;    // backtracking
    // }

    // if(isitSafe(grid,i+1,j-2,n)){
    //     grid [i+1][j-2]= count;
    //     f(grid,i+1,j-2,n,count+1);
    //     grid [i+1][j-2]= -1;    // backtracking
    // }

    // if(isitSafe(grid,i-1,j-2,n)){
    //     grid [i-1][j-2]= count;
    //     f(grid,i-1,j-2,n,count+1);
    //     grid [i-1][j-2]= -1;    // backtracking
    // }


}
void knigtsTour(int n,int i,int j){
    grid.resize(n,vector<int> (n,-1)); // -1 denotes position is vacant...
    f(grid,i,j,n,0);

}
int main () {
    knigtsTour(5,0,0);

}