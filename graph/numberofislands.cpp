class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j){
        int m=grid.size();
        int n=grid[0].size();
        //i=row and j=column--

        // row/col out of bound
        // if curr cell is water->0

        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]=='0'){    
            return;
        }

        //otherwise mark current cell as visited by setting it to '0'
        //it avoids revisiting again
        
        grid[i][j]='0';

        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);

    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        int isLandCount=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    isLandCount++;
                }
            }
        }
        return isLandCount;
    }
};