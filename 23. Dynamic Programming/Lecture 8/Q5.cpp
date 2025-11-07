// https://www.naukri.com/code360/problems/problem-name-boolean-evaluation_1214650
// #include <bits/stdc++.h>
// using namespace std;
// const int MOD = 1e9 + 7;

// int f(int i, int j, bool isTrue, string &exp, vector<vector<vector<int>>> &dp) {
//     if (i > j) return 0;
//     if (i == j) {
//         if (isTrue) return exp[i] == 'T';
//         else return exp[i] == 'F';
//     }

//     if (dp[i][j][isTrue] != -1) return dp[i][j][isTrue];

//     long long ways = 0;
//     for (int k = i + 1; k < j; k += 2) {
//         char op = exp[k];

//         int lt = f(i, k - 1, true, exp, dp);
//         int lf = f(i, k - 1, false, exp, dp);
//         int rt = f(k + 1, j, true, exp, dp);
//         int rf = f(k + 1, j, false, exp, dp);

//         if (op == '&') {
//             if (isTrue)
//                 ways += (1LL * lt * rt) % MOD;
//             else
//                 ways += (1LL * lt * rf + 1LL * lf * rt + 1LL * lf * rf) % MOD;
//         } else if (op == '|') {
//             if (isTrue)
//                 ways += (1LL * lt * rt + 1LL * lt * rf + 1LL * lf * rt) % MOD;
//             else
//                 ways += (1LL * lf * rf) % MOD;
//         } else if (op == '^') {
//             if (isTrue)
//                 ways += (1LL * lt * rf + 1LL * lf * rt) % MOD;
//             else
//                 ways += (1LL * lt * rt + 1LL * lf * rf) % MOD;
//         }

//         ways %= MOD;
//     }

//     return dp[i][j][isTrue] = ways;
// }

// int evaluateExp(string &exp) {
//     int n = exp.size();
//     vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(2, -1)));
//     return f(0, n - 1, true, exp, dp);
// }

// #include <bits/stdc++.h>
// using namespace std;

// const int MOD = 1e9 + 7;

// int evaluateExp(string &exp) {
//     int n = exp.size();
//     vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(2, 0)));

//     // Base cases ? single characters
//     for (int i = 0; i < n; i += 2) {
//         dp[i][i][1] = (exp[i] == 'T');
//         dp[i][i][0] = (exp[i] == 'F');
//     }

//     // Gap = 2, 4, 6, ...
//     for (int len = 3; len <= n; len += 2) {
//         for (int i = 0; i <= n - len; i += 2) {
//             int j = i + len - 1;
//             for (int isTrue = 0; isTrue <= 1; isTrue++) {
//                 long long ways = 0;
//                 for (int k = i + 1; k < j; k += 2) {
//                     char op = exp[k];
//                     int lt = dp[i][k - 1][1], lf = dp[i][k - 1][0];
//                     int rt = dp[k + 1][j][1], rf = dp[k + 1][j][0];

//                     if (op == '&') {
//                         if (isTrue)
//                             ways += 1LL * lt * rt;
//                         else
//                             ways += 1LL * lt * rf + 1LL * lf * rt + 1LL * lf * rf;
//                     } 
//                     else if (op == '|') {
//                         if (isTrue)
//                             ways += 1LL * lt * rt + 1LL * lt * rf + 1LL * lf * rt;
//                         else
//                             ways += 1LL * lf * rf;
//                     } 
//                     else if (op == '^') {
//                         if (isTrue)
//                             ways += 1LL * lt * rf + 1LL * lf * rt;
//                         else
//                             ways += 1LL * lt * rt + 1LL * lf * rf;
//                     }

//                     ways %= MOD;
//                 }

//                 dp[i][j][isTrue] = ways;
//             }
//         }
//     }

//     return dp[0][n - 1][1]; 
// }

