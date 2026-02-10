// https://leetcode.com/problems/largest-divisible-subset/
// Q2 with just one change 
// class Solution {
// public:
//     vector<int> largestDivisibleSubset(vector<int>& nums) {
//                 int n = nums.size();
//                 sort(nums.begin(), nums.end());
//         vector<int> dp(n, 1), hash(n);
//         int ans = 1, lastIndex = 0;

//         for (int i = 0; i < n; i++) {
//             hash[i] = i; 
//             for (int prev = 0; prev < i; prev++) {
//                 if (nums[i] % nums[prev]==0 && dp[prev] + 1 > dp[i]) {
//                     dp[i] = dp[prev] + 1;
//                     hash[i] = prev;
//                 }
//             }
//             if (dp[i] > ans) {
//                 ans = dp[i];
//                 lastIndex = i;
//             }
//         }

//         // Reconstructing LDS sequence
//         vector<int> lis;
//         while (hash[lastIndex] != lastIndex) {
//             lis.push_back(nums[lastIndex]);
//             lastIndex = hash[lastIndex];
//         }
//         lis.push_back(nums[lastIndex]);
       
//         return lis;
//     }
// };
