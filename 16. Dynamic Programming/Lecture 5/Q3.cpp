// https://www.naukri.com/code360/problems/longest-common-substring_1214702?leftPanelTabValue=PROBLEM
// int f(int idx1, int idx2, string &text1, string &text2, vector<vector<int>> &dp) {
//     if (idx1 < 0 || idx2 < 0) return 0;
//     if (dp[idx1][idx2] != -1) return dp[idx1][idx2];

//     if (text1[idx1] == text2[idx2])
//         return dp[idx1][idx2] = 1 + f(idx1 - 1, idx2 - 1, text1, text2, dp);
//     else
//         return dp[idx1][idx2] = max(f(idx1 - 1, idx2, text1, text2, dp),
//                                     f(idx1, idx2 - 1, text1, text2, dp));
// }

// int LCSubStr(string &str1, string &str2)
// {
//     int n = str1.size(), m = str2.size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//     int maxLen = 0;

//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= m; ++j) {
//             if (str1[i - 1] == str2[j - 1]) {
//                 dp[i][j] = 1 + dp[i - 1][j - 1];
//                 maxLen = max(maxLen, dp[i][j]);
//             } else {
//                 dp[i][j] = 0; 
//             }
//         }
//     }
//     return maxLen;
    

// }

