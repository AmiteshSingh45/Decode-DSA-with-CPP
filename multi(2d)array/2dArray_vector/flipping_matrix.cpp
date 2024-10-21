// making the first column 1......
// flipping the column having maximum number of zeroes..


class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
       //making first column 1
       for(int i=0;i<rows;i++){
        if(grid[i][0]==0){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==0) grid[i][j]=1;
                else {grid[i][j]=0;}
            }
           
        }
       }
        // count no. of 0s and 1s in the column
        
        for(int j=0;j<cols;j++){
            int noo=0;
            int noz=0;
            for(int i=0;i<rows;i++){
                if(grid[i][j]==0) noz++;
                else noo++;
            }

        
        if(noz>noo){
            //flip the column
            for(int i=0;i<rows;i++){
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
            }
         }
        
        }
        // binary to decimal
        int sum=0;
        int x=1;
        for(int i=0;i<rows;i++){
            for(int j=cols-1;j>=0;j--){
                sum+=grid[i][j]*x;
                x*=2;
            }
        }
  return sum;
        }

      
       
       
        
    
};