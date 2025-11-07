// https://leetcode.com/problems/shortest-common-supersequence/description/
// class Solution {
// private:
//     int f(int idx1, int idx2, string &text1, string &text2, vector<vector<int>> &dp) {
//         if (idx1 == 0 || idx2 == 0) return 0;
//         if (dp[idx1][idx2] != -1) return dp[idx1][idx2];

//         if (text1[idx1 - 1] == text2[idx2 - 1])
//             return dp[idx1][idx2] = 1 + f(idx1 - 1, idx2 - 1, text1, text2, dp);
//         else
//             return dp[idx1][idx2] = max(f(idx1 - 1, idx2, text1, text2, dp),
//                                         f(idx1, idx2 - 1, text1, text2, dp));
//     }

// public:
//     string shortestCommonSupersequence(string s1, string s2) {
//         int n = s1.size(), m = s2.size();
//         // Use dp table of lcs to generate
//         vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
//         f(n, m, s1, s2, dp);

//         int i = n, j = m;
//         string ans = "";

//         while (i > 0 && j > 0) {
//             if (s1[i - 1] == s2[j - 1]) {
//                 ans += s1[i - 1];
//                 i--, j--;
//             }
//             else if (dp[i - 1][j] >= dp[i][j - 1]) {
//                 ans += s1[i - 1];
//                 i--;
//             }
//             else {
//                 ans += s2[j - 1];
//                 j--;
//             }
//         }

//         while (i > 0) {
//             ans += s1[i - 1];
//             i--;
//         }

//         while (j > 0) {
//             ans += s2[j - 1];
//             j--;
//         }

//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };
