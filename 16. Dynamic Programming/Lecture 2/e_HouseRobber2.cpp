// https://leetcode.com/problems/house-robber-ii/
// Memoisation
// class Solution {
// public:
//     int solve(vector<int>& nums, int idx, vector<int>& dp) {
//         if(idx < 0) return 0;
//         if(dp[idx] != -1) return dp[idx];
//         int pick = nums[idx] + solve(nums, idx - 2, dp);
//         int unpick = solve(nums, idx - 1, dp);
//         return dp[idx] = max(pick, unpick);
//     }

//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if(n == 1) return nums[0];

//         // Case 1: Rob houses from index 0 to n-2
//         vector<int> temp1(nums.begin(), nums.end() - 1);
//         vector<int> dp1(temp1.size(), -1);
//         int ans1 = solve(temp1, temp1.size() - 1, dp1);

//         // Case 2: Rob houses from index 1 to n-1
//         vector<int> temp2(nums.begin() + 1, nums.end());
//         vector<int> dp2(temp2.size(), -1);
//         int ans2 = solve(temp2, temp2.size() - 1, dp2);

//         return max(ans1, ans2);
//     }
// };

// Tabulation
// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if(n == 1) return nums[0];

//         // Case 1: Rob from 0 to n-2
//         vector<int> dp1(n - 1, 0);
//         dp1[0] = nums[0];
//         if(n > 2) dp1[1] = max(nums[0], nums[1]);
//         for(int i = 2; i < n - 1; ++i) {
//             dp1[i] = max(dp1[i - 1], nums[i] + dp1[i - 2]);
//         }

//         // Case 2: Rob from 1 to n-1
//         vector<int> dp2(n - 1, 0);
//         dp2[0] = nums[1];
//         if(n > 2) dp2[1] = max(nums[1], nums[2]);
//         for(int i = 2; i < n - 1; ++i) {
//             dp2[i] = max(dp2[i - 1], nums[i + 1] + dp2[i - 2]);
//         }

//         return max(dp1[n - 2], dp2[n - 2]);
//     }
// };

// Space optimise
// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if(n == 1) return nums[0];

//         // Case 1: Rob from 0 to n-2
//         int prev1 = nums[0], prev2 = 0;
//         for(int i = 1; i < n - 1; ++i) {
//             int curr = max(prev1, nums[i] + prev2);
//             prev2 = prev1;
//             prev1 = curr;
//         }
//         int max1 = prev1;

//         // Case 2: Rob from 1 to n-1
//         prev1 = nums[1], prev2 = 0;
//         for(int i = 2; i < n; ++i) {
//             int curr = max(prev1, nums[i] + prev2);
//             prev2 = prev1;
//             prev1 = curr;
//         }
//         int max2 = prev1;

//         return max(max1, max2);
//     }
// };


