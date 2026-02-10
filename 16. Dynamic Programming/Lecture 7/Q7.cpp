// https://leetcode.com/problems/number-of-longest-increasing-subsequence/description/

// class Solution {
// public:
//     int findNumberOfLIS(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> dp(n,1);
//         vector<int> ct(n,1);
//         int mx=0;
//         for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i; j++) {
//             if (nums[j] < nums[i] && dp[j] + 1 > dp[i]) {
//                 dp[i] = dp[j] + 1;
//                 ct[i] = ct[j];
//             } else if (nums[j] <  nums[i] && dp[j] + 1 == dp[i]) {
//                 // Increase the count
//                 ct[i] = ct[i] + ct[j];
//             }
//         }
//         mx = max(mx, dp[i]);
//     }
//        int cnt = 0;

//     for (int i = 0; i < n; i++) {
//         if (dp[i] == mx) {
//             cnt += ct[i];
//         }
//     }

//     return cnt; 
     
//     }
// };