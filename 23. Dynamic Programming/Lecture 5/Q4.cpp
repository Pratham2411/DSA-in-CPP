// https://leetcode.com/problems/longest-palindromic-subsequence/description/

// class Solution {
// public:
//     int f(int i, int j, string &s, vector<vector<int>> &dp) {
//        if(i==j) return 1;
//        if(i>j) return 0;
//        if(dp[i][j]!=-1) return dp[i][j];
//        if(s[i]==s[j])  return dp[i][j]= 2+f(i+1,j-1,s,dp);
//        else return dp[i][j]=max(f(i+1,j,s,dp),f(i,j-1,s,dp));
//     }
//     int longestPalindromeSubseq(string s) {
//         int n=s.size();
//         vector<vector<int>> dp(n, vector<int>(n, -1));
//         return f(0,n-1,s,dp);
//     }
// };

// Like Q3

// class Solution {
// public:
//     int f(int i, int j, string &s, string &rev, vector<vector<int>> &dp) {
//         if (i < 0 || j < 0) return 0;
//         if (dp[i][j] != -1) return dp[i][j];

//         if (s[i] == rev[j])
//             return dp[i][j] = 1 + f(i - 1, j - 1, s, rev, dp);
//         else
//             return dp[i][j] = max(f(i - 1, j, s, rev, dp), f(i, j - 1, s, rev, dp));
//     }

//     int longestPalindromeSubseq(string s) {
//         string rev = s;
//         reverse(rev.begin(), rev.end());
//         int n = s.size();

//         vector<vector<int>> dp(n, vector<int>(n, -1));
//         return f(n - 1, n - 1, s, rev, dp);
//     }
// };

// class Solution {
// public:
//     int longestPalindromeSubseq(string s) {
//         string t = s;
//         reverse(t.begin(), t.end());
//         int n = s.size();

//         vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

//         for (int i = 1; i <= n; ++i) {
//             for (int j = 1; j <= n; ++j) {
//                 if (s[i - 1] == t[j - 1])
//                     dp[i][j] = 1 + dp[i - 1][j - 1];
//                 else
//                     dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }

//         return dp[n][n];
//     }
// };


