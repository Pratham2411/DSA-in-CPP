// https://www.naukri.com/code360/problems/subset-sum-equal-to-k_1550954
// DP on Subsequences
// #include <bits/stdc++.h> 
// using namespace std;

// bool f(int idx, int k, vector<int> &arr, vector<vector<int>>& dp) {
//     if (k == 0) return true;
//     if (idx == 0) return arr[0] == k;

//     if (dp[idx][k] != -1) return dp[idx][k];

//     bool unpick = f(idx - 1, k, arr, dp);
//     bool pick = (k >= arr[idx]) ? f(idx - 1, k - arr[idx], arr, dp) : false;

//     return dp[idx][k] = (pick || unpick);
// }

// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     vector<vector<int>> dp(n, vector<int>(k + 1, -1));
//     return f(n - 1, k, arr, dp);
// }

// #include <bits/stdc++.h> 
// using namespace std;

// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     vector<vector<bool>> dp(n, vector<bool>(k + 1, false));
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= k; j++) {
//             if (j == 0) dp[i][j] = true;  
//             else if (i == 0) dp[i][j] = (arr[0] == j);
//             else {
//                 bool unpick = dp[i - 1][j];
//                 bool pick = (j >= arr[i]) ? dp[i - 1][j - arr[i]] : false;
//                 dp[i][j] = (pick || unpick);
//             }
//         }
//     }
//     return dp[n - 1][k];
// }

// #include <bits/stdc++.h> 
// using namespace std;

// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     vector<bool> prev(k+1,0);
//     for (int i = 0; i < n; i++) {
//         vector<bool> curr(k+1,0);
//         for (int j = 0; j <= k; j++) {
//             if (j == 0) curr[j] = true;  
//             else if (i == 0) curr[j] = (arr[0] == j);
//             else {
//                 bool unpick =prev[j];
//                 bool pick = (j >= arr[i]) ? prev[j - arr[i]] : false;
//                 curr[j] = (pick || unpick);
//             }      
//         }
//          prev=curr;
//     }
//     return prev[k];
// }

