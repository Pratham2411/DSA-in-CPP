// https://leetcode.com/problems/longest-increasing-subsequence/
// DP on LIS
// class Solution {
// public:
//     int f(int i, int prev, vector<vector<int>>& dp, vector<int>& nums) {
//         if (i == nums.size()) return 0;
//         if (dp[i][prev + 1] != -1) return dp[i][prev + 1];
//         int take = 0;
//         if (prev == -1 || nums[i] > nums[prev])
//             take = 1 + f(i + 1, i, dp, nums);
//         int notake = f(i + 1, prev, dp, nums);
//         return dp[i][prev + 1] = max(take, notake);
//     }

//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         vector<vector<int>> dp(n, vector<int>(n + 1, -1));
//         return f(0, -1, dp, nums);
//     }
// };

// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//     int n = nums.size();
//     vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0)); 

//     for (int i = n - 1; i >= 0; i--) {
//         for (int j = i - 1; j >= -1; j--) {
//             int take = 0;
//             if (j == -1 || nums[i] > nums[j]) {
//                 take = 1 + dp[i + 1][i + 1]; 
//             }
//             int notake = dp[i + 1][j + 1]; 
//             dp[i][j + 1] = max(take, notake);
//         }
//     }
//     return dp[0][0]; 
// }
// };

// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> prev(n+1,0); vector<int> curr=prev;
//     for (int i = n - 1; i >= 0; i--) {
//         for (int j = i - 1; j >= -1; j--) {
//             int take = 0;
//             if (j == -1 || nums[i] > nums[j]) {
//                 take = 1 + prev[i + 1]; 
//             }
//             int notake = prev[j + 1]; 
//             curr[j + 1] = max(take, notake);
//         }
//        prev=curr;
//     }
//     return prev[0]; 
// }
// };

// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> prev(n+1,0);
//     for (int i = n - 1; i >= 0; i--) {
//         for (int j = i - 1; j >= -1; j--) {
//             int take = 0;
//             if (j == -1 || nums[i] > nums[j]) {
//                 take = 1 + prev[i + 1]; 
//             }
//             int notake = prev[j + 1]; 
//             prev[j + 1] = max(take, notake);
//         }
//     }
//     return prev[0]; 
// }
// };

// one dp approach useful in printing lis
// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> dp(n,1); int ans=0;
//     for(int i=0;i<n;i++){
//       for(int prev=0;prev<=i-1;prev++){
//         if(nums[i]>nums[prev]) dp[i]=max(dp[i],dp[prev]+1);
//       }
//       ans=max(ans,dp[i]);
//     }
//     return ans;
// }
// };


