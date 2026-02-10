// https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/

// class Solution {
// public:
//     int f(int i, int j, string &s, vector<vector<int>> &dp) {
//        if(i==j) return 1;
//        if(i>j) return 0;
//        if(dp[i][j]!=-1) return dp[i][j];
//        if(s[i]==s[j])  return dp[i][j]= 2+f(i+1,j-1,s,dp);
//        else return dp[i][j]=max(f(i+1,j,s,dp),f(i,j-1,s,dp));
//     }
//     int minInsertions(string s) {
//         // Keep the longest palindromic sequence intact and just add the rest left string in reverse order
//                 int n=s.size();
//         vector<vector<int>> dp(n, vector<int>(n, -1));
//         return n-f(0,n-1,s,dp);
//     }
// };

// class Solution {
// public:

//     int minInsertions(string s) {
//         // Keep the longest palindromic sequence intact and just add the rest left string in reverse order
//          string t = s;
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
//         return n-dp[n][n];
//     }
// };