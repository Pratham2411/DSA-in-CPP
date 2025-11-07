// https://leetcode.com/problems/coin-change/

// class Solution {
//  private:
//     int f(int idx, int amount, vector<int>& coins, vector<vector<int>>& dp) {
//     if (idx == 0) {
//         if (amount % coins[0] == 0) return amount / coins[0];
//         return 1e9; 
//     }

//     if (dp[idx][amount] != -1) return dp[idx][amount];

//     int notTake = f(idx - 1, amount, coins, dp);
//     int take = 1e9;
//     if (coins[idx] <= amount)
//         take = 1 + f(idx, amount - coins[idx], coins, dp); 

//     return dp[idx][amount] = min(take, notTake);
// }
// public:
//     int coinChange(vector<int>& coins, int amount) {
//          int n = coins.size();
//       vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
//       int ans = f(n - 1, amount, coins, dp);
//       return (ans >= 1e9) ? -1 : ans;
//     }
// };

// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
//         int n = coins.size();
//     vector<vector<int>> dp(n, vector<int>(amount + 1, 1e9));

//     for (int i = 0; i < n; i++) {
//         for (int t = 0; t <= amount; t++) {
//             if (i == 0) {
//                 if (t % coins[0] == 0) dp[i][t] = t / coins[0];
//                 else dp[i][t] = 1e9;
//                 continue;
//             }

//             int notTake = dp[i - 1][t];
//             int take = (coins[i] <= t) ? 1 + dp[i][t - coins[i]] : 1e9;
//             dp[i][t] = min(take, notTake);
//         }
//     }

//     int ans = dp[n - 1][amount];
//     return (ans >= 1e9) ? -1 : ans;
//     }
// };

// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
//        int n = coins.size();
//     vector<int> prev(amount + 1), curr(amount + 1);

//     for (int i = 0; i < n; i++) {
//         for (int t = 0; t <= amount; t++) {
//             if (i == 0) {
//                 if (t % coins[0] == 0) curr[t] = t / coins[0];
//                 else curr[t] = 1e9;
//                 continue;
//             }

//             int notTake = prev[t];
//             int take = (coins[i] <= t) ? 1 + curr[t - coins[i]] : 1e9;
//             curr[t] = min(take, notTake);
//         }
//         prev = curr;
//     }

//     return (prev[amount] >= 1e9) ? -1 : prev[amount];
//     }
// };

// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
//       vector<int> dp(amount + 1, 1e9);
//      dp[0] = 0; 

//     for (int i = 0; i < coins.size(); i++) {
//         for (int t = coins[i]; t <= amount; t++) {
//             if (dp[t - coins[i]] != 1e9)
//                 dp[t] = min(dp[t], 1 + dp[t - coins[i]]);
//         }
//     }

//     return (dp[amount] == 1e9) ? -1 : dp[amount];
//     }
// };