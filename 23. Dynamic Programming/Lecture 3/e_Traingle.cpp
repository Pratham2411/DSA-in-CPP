// https://leetcode.com/problems/triangle/

// Variable start/end points
// class Solution {
// private:
//     int f(int i,int j,vector<vector<int>>&dp,vector<vector<int>>& triangle){
//         if(i==triangle.size()-1) return triangle[i][j];
//         if(dp[i][j]!=-1) return dp[i][j];
//         return dp[i][j]= triangle[i][j]+min(f(i+1,j,dp,triangle),f(i+1,j+1,dp,triangle));

//     }   
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//          int n=triangle.size();
//          vector<vector<int>> dp(n, vector<int>(n, -1));
//          return f(0,0,dp,triangle);
//     }
// };

// class Solution {
//   public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//          int n=triangle.size();
//          vector<vector<int>> dp(n, vector<int>(n, -1));
//          for (int i = n - 1; i >= 0; i--) {
//             for (int j = 0; j <= i; j++) { 
//                 if (i == n - 1) dp[i][j] = triangle[i][j];       
//                 else
//                     dp[i][j] = triangle[i][j] + min(dp[i + 1][j], dp[i + 1][j + 1]); 
//             }
//         }
//          return dp[0][0];
//     }
// };

// class Solution {
//   public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//          int n=triangle.size();
//          vector<int> prev(n,0);
//          for (int i = n - 1; i >= 0; i--) {
//             vector<int> curr(n,0);
//             for (int j = 0; j <= i; j++) { 
//                 if (i == n - 1) curr[j] = triangle[i][j];       
//                 else
//                     curr[j] = triangle[i][j] + min(prev[j], prev[j + 1]); 
                  
//             }
//               prev=curr;
//         }
//          return prev[0];
//     }
// };