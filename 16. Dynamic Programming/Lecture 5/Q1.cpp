// https://leetcode.com/problems/longest-common-subsequence/description/
// DP on Strings
// class Solution {
// public:
//     int f(int idx1,int idx2,string &text1,string &text2, vector<vector<int>>&dp){
//         if(idx1<0||idx2<0) return 0;
//         if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
//         if(text1[idx1]==text2[idx2]) return dp[idx1][idx2]=1+f(idx1-1,idx2-1,text1,text2,dp);
//         else return dp[idx1][idx2]=max(f(idx1-1,idx2,text1,text2,dp),f(idx1,idx2-1,text1,text2,dp));
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         int n=text1.size(),m=text2.size();
//         vector<vector<int>> dp(n,vector<int>(m,-1));
//         return f(n-1,m-1,text1,text2,dp);
//     }
// };

// class Solution {
// public:
//     int longestCommonSubsequence(string text1, string text2) {
//     int n = text1.size(), m = text2.size();
//     vector<vector<int>> dp(n, vector<int>(m, 0));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (text1[i] == text2[j]) {
//                 if (i > 0 && j > 0)
//                     dp[i][j] = 1 + dp[i - 1][j - 1];
//                 else
//                     dp[i][j] = 1; // First matching character
//             } else {
//                 int op1 = (i > 0) ? dp[i - 1][j] : 0;
//                 int op2 = (j > 0) ? dp[i][j - 1] : 0;
//                 dp[i][j] = max(op1, op2);
//             }
//         }
//     }

//     return dp[n - 1][m - 1];
// }

// };

// class Solution {
// public:
//     int longestCommonSubsequence(string text1, string text2) {
//         int n = text1.size(), m = text2.size();
//         vector<int> prev(m + 1, 0), curr(m + 1, 0);

//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= m; j++) {
//                 if (text1[i - 1] == text2[j - 1]) {
//                     curr[j] = 1 + prev[j - 1];
//                 } else {
//                     curr[j] = max(prev[j], curr[j - 1]);
//                 }
//             }
//             prev = curr;
//         }

//         return prev[m];
//     }
// };
