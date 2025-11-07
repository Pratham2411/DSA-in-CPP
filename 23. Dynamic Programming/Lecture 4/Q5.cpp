// https://www.naukri.com/code360/problems/partitions-with-given-difference_3751628

// #include <bits/stdc++.h> 
// using namespace std;

// int mod = 1e9 + 7;

// int f(int idx, int k, vector<int>& arr, vector<vector<int>>& dp) {
//     if (idx == 0) {
//         if (k == 0 && arr[0] == 0) return 2; 
//         if (k == 0 || arr[0] == k) return 1;
//         return 0;
//     }

//     if (dp[idx][k] != -1) return dp[idx][k];

//     int unpick = f(idx - 1, k, arr, dp);
//     int pick = (k >= arr[idx]) ? f(idx - 1, k - arr[idx], arr, dp) : 0;

//     return dp[idx][k] = (pick + unpick) % mod;
// }

// int countPartitions(int n, int d, vector<int> &arr) {
//     int sum = accumulate(arr.begin(), arr.end(), 0);
    
    
//     if ((sum + d) % 2 != 0 || sum < d) return 0;

//     int s1 = (sum + d) / 2;
//     vector<vector<int>> dp(n, vector<int>(s1 + 1, -1)); 
//     return f(n - 1, s1, arr, dp);
// }

// Rest is similar to Q4
