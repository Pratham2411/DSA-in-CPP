// https://leetcode.com/problems/unique-paths-ii/
// Memoisation
// class Solution {
// private:
//      int f(int m,int n,vector<vector<int>>&dp,vector<vector<int>>& obstacleGrid){
//        if(m == 0 && n == 0) return (obstacleGrid[0][0] == 1 ? 0 : 1);
//         if(m==-1||n==-1) return 0;
//         if(obstacleGrid[m][n]==1) return 0;
//         if(dp[m][n]!=-1) return dp[m][n];
//         return dp[m][n]=f(m-1,n,dp,obstacleGrid)+f(m,n-1,dp,obstacleGrid);
//     }
// public:
    
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m=obstacleGrid.size(),n=obstacleGrid[0].size();
//         vector<vector<int>>dp(m,vector<int>(n,-1));
//         return f(m-1,n-1,dp,obstacleGrid);
//     }
// };

// Tabulation
// class Solution {
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size(), n = obstacleGrid[0].size();
//         vector<vector<int>> dp(m, vector<int>(n, 0));

//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(obstacleGrid[i][j] == 1) {
//                     dp[i][j] = 0; // No path through an obstacle
//                 } else if(i == 0 && j == 0) {
//                     dp[i][j] = 1; // Starting point
//                 } else {
//                     int up = 0, left = 0;
//                     if(i > 0) up = dp[i - 1][j];
//                     if(j > 0) left = dp[i][j - 1];
//                     dp[i][j] = up + left;
//                 }
//             }
//         }

//         return dp[m - 1][n - 1];
//     }
// };

// Space optimisation
// class Solution {
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size(), n = obstacleGrid[0].size();
//         vector<int> prev(n, 0);

//         for(int i = 0; i < m; i++) {
//             vector<int> curr(n, 0);
//             for(int j = 0; j < n; j++) {
//                 if(obstacleGrid[i][j] == 1) {
//                     curr[j] = 0; // obstacle, no path
//                 } else if(i == 0 && j == 0) {
//                     curr[j] = 1; // starting cell
//                 } else {
//                     int up = 0, left = 0;
//                     if(i > 0) up = prev[j];
//                     if(j > 0) left = curr[j - 1];
//                     curr[j] = up + left;
//                 }
//             }
//             prev = curr;
//         }

//         return prev[n - 1];
//     }
// };

