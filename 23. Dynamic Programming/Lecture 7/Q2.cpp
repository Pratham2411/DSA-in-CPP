//  Printing LIS
// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> dp(n, 1), hash(n);
//         int ans = 1, lastIndex = 0;

//         for (int i = 0; i < n; i++) {
//             hash[i] = i; // initially pointing to self
//             for (int prev = 0; prev < i; prev++) {
//                 if (nums[i] > nums[prev] && dp[prev] + 1 > dp[i]) {
//                     dp[i] = dp[prev] + 1;
//                     hash[i] = prev;
//                 }
//             }
//             if (dp[i] > ans) {
//                 ans = dp[i];
//                 lastIndex = i;
//             }
//         }

//         // Reconstructing LIS sequence
//         vector<int> lis;
//         while (hash[lastIndex] != lastIndex) {
//             lis.push_back(nums[lastIndex]);
//             lastIndex = hash[lastIndex];
//         }
//         lis.push_back(nums[lastIndex]);

//         // Print in correct order
//         reverse(lis.begin(), lis.end());
//         for (int num : lis) cout << num << " ";
//         cout << endl;

//         return ans;
//     }
// };

