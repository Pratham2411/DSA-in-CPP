// https://leetcode.com/problems/palindrome-partitioning-ii/description/

// class Solution {
// public:
//     int f(int i, string &s, vector<int>& dp, vector<vector<bool>> &isPal) {
//         int n = s.size();
//         if (i == n) return 0;
//         if (dp[i] != -1) return dp[i];

//         int minCut = INT_MAX;
//         for (int j = i; j < n; j++) {
//             if (isPal[i][j]) {
//                 int cut = 1 + f(j + 1, s, dp, isPal);
//                 minCut = min(minCut, cut);
//             }
//         }

//         return dp[i] = minCut;
//     }

//     int minCut(string s) {
//         int n = s.size();
//         vector<int> dp(n + 1, -1);

//         // Precompute isPalindrome[i][j]
//         vector<vector<bool>> isPal(n, vector<bool>(n, false));
//         for (int i = n - 1; i >= 0; i--) {
//             for (int j = i; j < n; j++) {
//                 if (s[i] == s[j] && (j - i <= 2 || isPal[i + 1][j - 1])) {
//                     isPal[i][j] = true;
//                 }
//             }
//         }

//         return f(0, s, dp, isPal) - 1;
//     }
// };


// class Solution {
// public:
//     int minCut(string s) {
//         int n = s.size();

//         // Step 1: Precompute palindromes
//         vector<vector<bool>> isPal(n, vector<bool>(n, false));
//         for (int i = n - 1; i >= 0; i--) {
//             for (int j = i; j < n; j++) {
//                 if (s[i] == s[j] && (j - i <= 2 || isPal[i + 1][j - 1])) {
//                     isPal[i][j] = true;
//                 }
//             }
//         }

//         // Step 2: dp[i] = min cuts for s[i...n-1]
//         vector<int> dp(n + 1, 0); // dp[n] = 0

//         for (int i = n - 1; i >= 0; i--) {
//             int minCut = INT_MAX;
//             for (int j = i; j < n; j++) {
//                 if (isPal[i][j]) {
//                     minCut = min(minCut, 1 + dp[j + 1]);
//                 }
//             }
//             dp[i] = minCut;
//         }

//         return dp[0] - 1; // one extra cut counted initially
//     }
// };

