// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/
// Q3 extension
// class Solution {
// private: int f(int i,int buy, int ts,vector<int>& prices, vector<vector<vector<int>>>& dp){
//     if(i==prices.size()) return 0;
//     if(ts==0) return 0;
//     if(dp[i][buy][ts]!=-1) return dp[i][buy][ts];
//     if(buy){
//         return dp[i][buy][ts]=max(f(i+1,1,ts,prices,dp),-prices[i]+f(i+1,0,ts,prices,dp)); // buy,notbuy
//     }
//     else{
//         return dp[i][buy][ts]=max(prices[i]+f(i+1,1,ts-1,prices,dp),f(i+1,0,ts,prices,dp));  // sell,notsell
//     }
// }    
// public:
//     int maxProfit(int k, vector<int>& prices) {
//         int n=prices.size();
//        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k+1, -1)));
//         return f(0,1,k,prices,dp);
//     }
// };

// class Solution {
// public:
//     int maxProfit(int k, vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(k + 1, 0)));

//         for (int i = n - 1; i >= 0; i--) {
//             for (int buy = 0; buy <= 1; buy++) {
//                 for (int ts = 1; ts <= k; ts++) {
//                     if (buy) {
//                         dp[i][buy][ts] = max(
//                             dp[i + 1][1][ts],                 // skip
//                             -prices[i] + dp[i + 1][0][ts]     // buy
//                         );
//                     } else {
//                         dp[i][buy][ts] = max(
//                             prices[i] + dp[i + 1][1][ts - 1], // sell
//                             dp[i + 1][0][ts]                  // skip
//                         );
//                     }
//                 }
//             }
//         }

//         return dp[0][1][k]; // start: day 0, can buy, k transactions
//     }
// };


// Space optimisation is also similar

// Different approach

// class Solution {
// private:
//     int f(int i, int t, int k, vector<int>& prices, vector<vector<int>>& dp) {
//         if (i == prices.size() || t == 2 * k) return 0;
//         if (dp[i][t] != -1) return dp[i][t];

//         if (t % 2 == 0) {
//             // Buy state
//             dp[i][t] = max(
//                 -prices[i] + f(i + 1, t + 1, k, prices, dp),  // buy
//                 f(i + 1, t, k, prices, dp)                    // skip
//             );
//         } else {
//             // Sell state
//             dp[i][t] = max(
//                 prices[i] + f(i + 1, t + 1, k, prices, dp),   // sell
//                 f(i + 1, t, k, prices, dp)                    // skip
//             );
//         }

//         return dp[i][t];
//     }

// public:
//     int maxProfit(int k, vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<int>> dp(n, vector<int>(2 * k, -1));
//         return f(0, 0, k, prices, dp);
//     }
// };

// class Solution {
// public:
//     int maxProfit(int k, vector<int>& prices) {
//         int n = prices.size();
//         int totalOps = 2 * k;

//         vector<vector<int>> dp(n + 1, vector<int>(totalOps + 1, 0));

//         for (int i = n - 1; i >= 0; i--) {
//             for (int t = totalOps - 1; t >= 0; t--) {
//                 if (t % 2 == 0) {
//                     // Buy state
//                     dp[i][t] = max(
//                         -prices[i] + dp[i + 1][t + 1],  
//                         dp[i + 1][t]                   
//                     );
//                 } else {
//                     // Sell state
//                     dp[i][t] = max(
//                         prices[i] + dp[i + 1][t + 1],  
//                         dp[i + 1][t]                   
//                     );
//                 }
//             }
//         }

//         return dp[0][0]; 
//     }
// };

// class Solution {
// public:
//     int maxProfit(int k, vector<int>& prices) {
//         int n = prices.size();
//         int totalOps = 2 * k; // because each transaction = buy + sell

//         vector<int> prev(totalOps + 1, 0), curr(totalOps + 1, 0);

//         for (int i = n - 1; i >= 0; i--) {
//             for (int t = 0; t < totalOps; t++) {
//                 if (t % 2 == 0) {
//                     // Buy state
//                     curr[t] = max(-prices[i] + prev[t + 1], prev[t]); // Buy or skip
//                 } else {
//                     // Sell state
//                     curr[t] = max(prices[i] + prev[t + 1], prev[t]);  // Sell or skip
//                 }
//             }
//             prev = curr;
//         }

//         return prev[0]; // Start from operation 0 (1st buy)
//     }
// };
