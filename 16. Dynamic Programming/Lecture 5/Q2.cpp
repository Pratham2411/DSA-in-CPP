// https://www.naukri.com/code360/problems/print-longest-common-subsequence_8416383

// Fill using dp array 
// #include <bits/stdc++.h>
// using namespace std;

// int f(int idx1, int idx2, string &text1, string &text2, vector<vector<int>> &dp) {
//     if (idx1 < 0 || idx2 < 0) return 0;
//     if (dp[idx1][idx2] != -1) return dp[idx1][idx2];

//     if (text1[idx1] == text2[idx2])
//         return dp[idx1][idx2] = 1 + f(idx1 - 1, idx2 - 1, text1, text2, dp);
//     else
//         return dp[idx1][idx2] = max(f(idx1 - 1, idx2, text1, text2, dp),
//                                     f(idx1, idx2 - 1, text1, text2, dp));
// }

// string findLCS(int n, int m, string &s1, string &s2) {
//     vector<vector<int>> dp(n, vector<int>(m, -1));
//     f(n - 1, m - 1, s1, s2, dp);

//     // Build the LCS string using dp
//     int i = n - 1, j = m - 1;
//     string ans = "";
//     while (i >= 0 && j >= 0) {
//         if (s1[i] == s2[j]) {
//             ans += s1[i];
//             i--, j--;
//         }
//         else if (i > 0 && dp[i - 1][j] >= dp[i][j - 1])
//             i--;
//         else
//             j--;
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
