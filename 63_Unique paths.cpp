
class Solution {
public:
    int memo[101][101];
    int countWays(int i,int j,int m,int n,vector<vector<int>>& obstacleGrid){
        if(i==m or j==n) return 0;
        if(i==m-1 and j==n-1) return 1;
        if(obstacleGrid[i][j]==1) return 0;
        if(memo[i][j]!=-1) return memo[i][j];
        int s=countWays(i+1,j,m,n,obstacleGrid);
        int e=countWays(i,j+1,m,n,obstacleGrid);
        memo[i][j]=s+e;
        return memo[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        memset(memo,-1,sizeof(memo));
        return countWays(0,0,m,n,obstacleGrid);
    }
};
