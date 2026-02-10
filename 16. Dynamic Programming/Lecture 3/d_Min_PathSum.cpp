// https://leetcode.com/problems/minimum-path-sum/description/

// class Solution {
// private:
//     int f(int m,int n,vector<vector<int>>&dp,vector<vector<int>>& grid){
//         if(m==0&&n==0) return grid[0][0];
//         if (m==-1||n==-1) return INT_MAX;
//         if(dp[m][n]!=-1) return dp[m][n];
//         int left=f(m,n-1,dp,grid);
//         int up=f(m-1,n,dp,grid);
//         return dp[m][n]=grid[m][n]+min(left,up);
//     }
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int m=grid.size(),n=grid[0].size();
//         vector<vector<int>>dp(m,vector<int>(n,-1));
//         return f(m-1,n-1,dp,grid);
//     }
// };

// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int m = grid.size(), n = grid[0].size();
//         vector<vector<int>> dp(m, vector<int>(n, 0));

//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(i == 0 && j == 0) dp[i][j] = grid[i][j];
//                 else {
//                     int up = (i > 0) ? dp[i-1][j] : INT_MAX;
//                     int left = (j > 0) ? dp[i][j-1] : INT_MAX;
//                     dp[i][j] = grid[i][j] + min(up, left);
//                 }
//             }
//         }
//         return dp[m-1][n-1];
//     }
// };

// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int m = grid.size(), n = grid[0].size();
//         vector<int> prev(n, 0);  // Only one row is needed

//         for (int i = 0; i < m; i++) {
//             vector<int> curr(n, 0);  // Current row
//             for (int j = 0; j < n; j++) {
//                 if (i == 0 && j == 0) curr[j] = grid[i][j];
//                 else {
//                     int up = (i > 0) ? prev[j] : INT_MAX;
//                     int left = (j > 0) ? curr[j - 1] : INT_MAX;
//                     curr[j] = grid[i][j] + min(up, left);
//                 }
//             }
//             prev = curr;  // Move to the next row
//         }

//         return prev[n - 1];
//     }
// };


