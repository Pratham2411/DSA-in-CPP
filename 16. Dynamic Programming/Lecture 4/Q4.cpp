// https://www.naukri.com/code360/problems/count-subsets-with-sum-k_3952532
// int mod = 1e9 + 7;

// int f(int idx, int k, vector<int>& arr, vector<vector<int>>& dp) {
//     if (idx == 0) {
//         if (k == 0 && arr[0] == 0) return 2; // both pick and not-pick possible
//         if (k == 0 || arr[0] == k) return 1;
//         return 0;
//     }

//     if (dp[idx][k] != -1) return dp[idx][k];

//     int unpick = f(idx - 1, k, arr, dp);
//     int pick = (k >= arr[idx]) ? f(idx - 1, k - arr[idx], arr, dp) : 0;

//     return dp[idx][k] = (pick + unpick) % mod;
// }

// int findWays(vector<int>& arr, int k) {
//     int n = arr.size();
//     vector<vector<int>> dp(n, vector<int>(k + 1, -1));
//     return f(n - 1, k, arr, dp);
// }

// #include <bits/stdc++.h>
// using namespace std;

// int mod = 1e9 + 7;

// int findWays(vector<int>& arr, int k) {
//     int n = arr.size();
//     vector<vector<int>> dp(n, vector<int>(k + 1, 0));
//     if (arr[0] == 0)
//         dp[0][0] = 2; 
//     else
//         dp[0][0] = 1; 

//     if (arr[0] != 0 && arr[0] <= k)
//         dp[0][arr[0]] = 1; 

//     for (int i = 1; i < n; i++) {
//         for (int j = 0; j <= k; j++) {
//             int notPick = dp[i - 1][j];
//             int pick = (j >= arr[i]) ? dp[i - 1][j - arr[i]] : 0;
//             dp[i][j] = (notPick + pick) % mod;
//         }
//     }

//     return dp[n - 1][k];
// }

// #include <bits/stdc++.h>
// using namespace std;

// int mod = 1e9 + 7;

// int findWays(vector<int>& arr, int k) {
//     int n = arr.size();
//     vector<int> prev(k + 1, 0), curr(k + 1, 0);

//     if (arr[0] == 0)
//         prev[0] = 2; 
//     else
//         prev[0] = 1; 

//     if (arr[0] != 0 && arr[0] <= k)
//         prev[arr[0]] = 1; 

//     for (int i = 1; i < n; i++) {
//         for (int j = 0; j <= k; j++) {
//             int unpick = prev[j];
//             int pick = (j >= arr[i]) ? prev[j - arr[i]] : 0;
//             curr[j] = (pick + unpick) % mod;
//         }
//         prev = curr;
//     }

//     return prev[k];
// }
