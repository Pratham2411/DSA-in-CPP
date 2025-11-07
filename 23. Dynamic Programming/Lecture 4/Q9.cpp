// https://leetcode.com/problems/coin-change-ii/

// class Solution {
//  private:
//     int f(int idx, int amount, vector<int>& coins, vector<vector<int>>& dp) {
//     if(amount==0) return 1;
//     if (idx == 0) return (amount % coins[0] == 0);

//     if (dp[idx][amount] != -1) return dp[idx][amount];

//     int notTake = f(idx - 1, amount, coins, dp);
//     int take = 0;
//     if (coins[idx] <= amount)
//         take =  f(idx, amount - coins[idx], coins, dp); 

//     return dp[idx][amount] = take+notTake;
// }    
// public:
//     int change(int amount, vector<int>& coins) {
//      int n = coins.size();
//       vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
//       return f(n - 1, amount, coins, dp);
//     }
// };

// Tabulation ans Space optimisation is similar to Q7

