// Coin change 

// Top down 
// class Solution {
// public:
// int solve(vector<int> &coins,int amount,vector<int> &dp){
//       if(amount==0) return 0;
//       int mini=INT_MAX;
//       if(dp[amount]!=-1) return dp[amount];
//       for(int i=0;i<coins.size();i++){
//           if(amount-coins[i]>=0){ int amt=solve(coins,amount-coins[i],dp);
//           if(amt!=INT_MAX){
//              int ans= 1 + amt;
//             mini=min(ans,mini);
//           }  
//           }  
//       }
//     dp[amount]=mini;
//     return dp[amount];
// }
//     int coinChange(vector<int>& coins, int amount) {
//         int n=amount;
//         vector<int> dp(n+1,-1);
//         int ans=solve(coins,amount,dp);
//         if(ans==INT_MAX) return -1;
//         else return ans;
//     }
// };

// Bottom up 

// class Solution {
// public:
// int solve(vector<int> &coins,int amount){
//      int n=amount;
//     vector<int> dp(n+1,INT_MAX);
//     dp[0]=0;
//     for(int value=1;value<=amount;value++){
//            int mini=INT_MAX;
//       for(int i=0;i<coins.size();i++){
//           if(value-coins[i]>=0){ 
//             int amt=dp[value-coins[i]];
//           if(amt!=INT_MAX){
//              int ans= 1 + amt;
//             mini=min(ans,mini);
//            }  
//           }  
//       }
//       dp[value]=mini;
//     }
//     return dp[amount];
// }
//     int coinChange(vector<int>& coins, int amount) {
//         int ans=solve(coins,amount);
//         if(ans==INT_MAX) return -1;
//         else return ans;
//     }
// };

// class Solution {
// public:
// int solve(vector<int> &coins,int amount){
//      int n=amount;
//     vector<int> dp(n+1,INT_MAX);
//     dp[0]=0;
//     for(int value=1;value<=amount;value++){
//            int mini=INT_MAX;
//       for(int i=0;i<coins.size();i++){
//           if(value-coins[i]>=0){ 
//             int amt=dp[value-coins[i]];
//           if(amt!=INT_MAX){
//              int ans= 1 + amt;
//             mini=min(ans,mini);
//            }  
//           }  
//       }
//       dp[value]=mini;
//     }
//     return dp[amount];
// }
//     int coinChange(vector<int>& coins, int amount) {
//         int ans=solve(coins,amount);
//         if(ans==INT_MAX) return -1;
//         else return ans;
//     }
// };