// https://leetcode.com/problems/target-sum/
//  similar to qn 5
//  class Solution {
// public:
//     int findTargetSumWays(vector<int>& nums, int target) {
       
//         int n = nums.size();
//         int totalSum = accumulate(nums.begin(), nums.end(), 0);

//         if ((totalSum + target) % 2 != 0 || (totalSum + target) < 0)
//             return 0;

//         int s1 = (totalSum + target) / 2;

//         vector<vector<int>> dp(n, vector<int>(s1 + 1, 0));
        
//         if (nums[0] == 0) dp[0][0] = 2;  // +0 and -0 both valid
//         else dp[0][0] = 1;              

//         if (nums[0] != 0 && nums[0] <= s1)
//             dp[0][nums[0]] = 1;

//         for (int i = 1; i < n; i++) {
//             for (int j = 0; j <= s1; j++) {
//                 int notPick = dp[i - 1][j];
//                 int pick = (j >= nums[i]) ? dp[i - 1][j - nums[i]] : 0;
//                 dp[i][j] = notPick + pick;
//             }
//         }

//         return dp[n - 1][s1];
//     }
// };

