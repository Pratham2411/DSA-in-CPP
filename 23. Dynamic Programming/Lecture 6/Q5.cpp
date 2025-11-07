// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/description/
// Similar to Q2

// class Solution {
// private: int f(int i,int buy,vector<int>& prices, vector<vector<int>> &dp){
//     if(i>=prices.size()) return 0;
//     if(dp[i][buy]!=-1) return dp[i][buy];
//     if(buy){
//         return dp[i][buy]=max(f(i+1,1,prices,dp),-prices[i]+f(i+1,0,prices,dp)); // buy,notbuy
//     }
//     else{
//         return dp[i][buy]=max(prices[i]+f(i+2,1,prices,dp),f(i+1,0,prices,dp));  // sell,notsell
//     }
// }
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         vector<vector<int>> dp(n,vector<int>(2,-1));
//         return f(0,1,prices,dp);
//     }
// };

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<int>> dp(n + 2, vector<int>(2, 0)); // +2 to handle i+2

//         for (int i = n - 1; i >= 0; i--) {
//             for (int buy = 0; buy <= 1; buy++) {
//                 if (buy) {
//                     dp[i][buy] = max(
//                         dp[i + 1][1],               
//                         -prices[i] + dp[i + 1][0]   
//                     );
//                 } else {
//                     dp[i][buy] = max(
//                         prices[i] + dp[i + 2][1],   
//                         dp[i + 1][0]                
//                     );
//                 }
//             }
//         }

//         return dp[0][1];
//     }
// };

