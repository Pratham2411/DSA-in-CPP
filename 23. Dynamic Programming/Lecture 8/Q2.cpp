// Tabulation of MCM
// #include <bits/stdc++.h>
// int matrixMultiplication(vector<int> &arr, int N)
// {
//     vector<vector<int>> dp(N, vector<int>(N, 0));

//     for(int i = N - 1; i >= 1; i--) {
//         for(int j = i + 1; j < N; j++) {
//             int mins = INT_MAX;
//             for(int k = i; k < j; k++) {
//                 int cost = arr[i - 1] * arr[k] * arr[j] + dp[i][k] + dp[k + 1][j];
//                 mins = min(mins, cost);
//             }
//             dp[i][j] = mins;
//         }
//     }

//     return dp[1][N - 1];
// }
