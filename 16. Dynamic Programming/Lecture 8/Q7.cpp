// https://leetcode.com/problems/partition-array-for-maximum-sum/description/

// class Solution {
// public:
//     int f(int i, vector<int>& arr, int k, vector<int>& dp) {
//         int n = arr.size();
//         if (i == n) return 0;
//         if (dp[i] != -1) return dp[i];

//         int maxSum = 0;
//         int currMax = 0;

//         for (int j = i; j < min(n, i + k); j++) {
//             currMax = max(currMax, arr[j]);
//             int total = (j - i + 1) * currMax + f(j + 1, arr, k, dp);
//             maxSum = max(maxSum, total);
//         }

//         return dp[i] = maxSum;
//     }

//     int maxSumAfterPartitioning(vector<int>& arr, int k) {
//         int n = arr.size();
//         vector<int> dp(n, -1);
//         return f(0, arr, k, dp);
//     }
// };

// class Solution {
// public:
//     int maxSumAfterPartitioning(vector<int>& arr, int k) {
//         int n = arr.size();
//         vector<int> dp(n + 1, 0); 

//         for (int i = n - 1; i >= 0; i--) {
//             int currMax = 0;
//             int maxAns = 0;

//             for (int j = i; j < min(n, i + k); j++) {
//                 currMax = max(currMax, arr[j]);
//                 int length = j - i + 1;
//                 int total = length * currMax + dp[j + 1];
//                 maxAns = max(maxAns, total);
//             }

//             dp[i] = maxAns;
//         }

//         return dp[0];
//     }
// };
