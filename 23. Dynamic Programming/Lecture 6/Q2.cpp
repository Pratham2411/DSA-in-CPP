// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

// class Solution {
// private: int f(int i,int buy,vector<int>& prices, vector<vector<int>> &dp){
//     if(i==prices.size()) return 0;
//     if(dp[i][buy]!=-1) return dp[i][buy];
//     if(buy){
//         return dp[i][buy]=max(f(i+1,1,prices,dp),-prices[i]+f(i+1,0,prices,dp)); // buy,notbuy
//     }
//     else{
//         return dp[i][buy]=max(prices[i]+f(i+1,1,prices,dp),f(i+1,0,prices,dp));  // sell,notsell
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
//    int maxProfit(vector<int>& prices) {
//     int n = prices.size();
//     vector<vector<int>> dp(n + 1, vector<int>(2, 0));  

//     for (int i = n - 1; i >= 0; i--) {
//         dp[i][1] = max(-prices[i] + dp[i + 1][0], dp[i + 1][1]);  // Buy
//         dp[i][0] = max(prices[i] + dp[i + 1][1], dp[i + 1][0]);   // Sell
//     }

//     return dp[0][1];
// }
// };

// class Solution {
// public:
//    int maxProfit(vector<int>& prices) {
//     int n = prices.size();
//     vector<int> prev(2,0); vector<int> curr(2,0); 
//     for (int i = n - 1; i >= 0; i--) {
//         curr[1] = max(-prices[i] + prev[0], prev[1]);  // Buy
//         curr[0] = max(prices[i] + prev[1], prev[0]);   // Sell
//         prev=curr;
//     }

//     return prev[1];
// }
// };

// class Solution {
// public:
//    int maxProfit(vector<int>& prices) {
//     int n = prices.size();
//     vector<int> prev(2,0); 
//     for (int i = n - 1; i >= 0; i--) {
//         int a=prev[0],b=prev[1];
//         prev[1] = max(-prices[i] + a, b);  // Buy
//         prev[0] = max(prices[i] + b, a);   // Sell
//     }
//     return prev[1];
// }
// };