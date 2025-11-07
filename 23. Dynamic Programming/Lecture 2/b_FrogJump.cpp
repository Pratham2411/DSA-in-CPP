// https://www.geeksforgeeks.org/problems/geek-jump/1

// memoisation
// class Solution {
// public:
//     int solve(vector<int>& height, int n, vector<int>& dp) {
//         if (n == 0) return 0;
//         if (n == 1) return abs(height[1] - height[0]);
//         if (dp[n] != -1) return dp[n];

//         int a = solve(height, n - 1, dp) + abs(height[n] - height[n - 1]);
//         int b = solve(height, n - 2, dp) + abs(height[n] - height[n - 2]);

//         return dp[n] = min(a, b);
//     }

//     int minCost(vector<int>& height) {
//         int n = height.size();
//         vector<int> dp(n, -1);
//         return solve(height, n - 1, dp);
//     }
// };

// tabulation
// class Solution {
// public:
//     int minCost(vector<int>& height) {
//         int n = height.size();
//         if (n == 0) return 0;
//         if (n == 1) return 0;
//         vector<int> dp(n, -1);
//         dp[0]=0;
//         dp[1]= abs(height[1] - height[0]);
//         for(int i=2;i<n;i++){
//             int a = dp[i-1] + abs(height[i] - height[i - 1]);
//             int b = dp[i-2] + abs(height[i] - height[i - 2]);
//             dp[i]= min(a,b);
//         }
//         return dp[n-1];
//     }
// };

// space optimise

// class Solution {
// public:
//     int minCost(vector<int>& height) {
//         int n = height.size();
//         if (n == 0) return 0;
//         if (n == 1) return 0;
//         vector<int> dp(n, -1);
//         dp[0]=0;
//         dp[1]= abs(height[1] - height[0]);
//         int a=0,b= abs(height[1] - height[0]);
//         for(int i=2;i<n;i++){
//             int x = b + abs(height[i] - height[i - 1]);
//             int y =a +  abs(height[i] - height[i - 2]);
//             dp[i]= min(x,y);
//             a=b;
//             b=min(x,y);
//         }
//         return b;
//     }
// };
