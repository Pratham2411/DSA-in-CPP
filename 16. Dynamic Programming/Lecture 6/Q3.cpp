// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/description/

// Extension of Q2

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
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
//         return f(0,1,2,prices,dp);
//     }
// };

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(3, 0)));

//         for (int i = n - 1; i >= 0; i--) {
//             for (int buy = 0; buy <= 1; buy++) {
//                 for (int ts = 1; ts <= 2; ts++) {
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

//         return dp[0][1][2];  
//     }
// };

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<int>> prev(2, vector<int>(3, 0)), curr(2, vector<int>(3, 0));

//         for (int i = n - 1; i >= 0; i--) {
//             for (int buy = 0; buy <= 1; buy++) {
//                 for (int ts = 1; ts <= 2; ts++) {
//                     if (buy) {
//                         curr[buy][ts] = max(
//                             prev[1][ts],                  
//                             -prices[i] + prev[0][ts]      
//                         );
//                     } else {
//                         curr[buy][ts] = max(
//                             prices[i] + prev[1][ts - 1],   
//                             prev[0][ts]                    
//                         );
//                     }
//                 }
//             }
//             prev = curr;
//         }

//         return prev[1][2]; 
//     }
// };

