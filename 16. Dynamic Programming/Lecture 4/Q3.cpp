// https://leetcode.com/problems/partition-array-into-two-arrays-to-minimize-sum-difference/

// int minSubsetSumDifference(vector<int>& arr, int n)
// {
//     int total = accumulate(arr.begin(), arr.end(), 0);
//     vector<vector<bool>> dp(n, vector<bool>(total + 1, false));

//     for(int i = 0; i < n; i++) {
//         for(int sum = 0; sum <= total; sum++) {
//             if(sum == 0) dp[i][sum] = true;
//             else if(i == 0 && arr[0] <= total) dp[0][arr[0]] = true;
//             else if(i > 0) {
//                 bool notPick = dp[i - 1][sum];
//                 bool pick = (sum >= arr[i]) ? dp[i - 1][sum - arr[i]] : false;
//                 dp[i][sum] = pick || notPick;
//             }
//         }
//     }

//     int minDiff = INT_MAX;
//     for(int s1 = 0; s1 <= total / 2; s1++) {
//         if(dp[n - 1][s1]) {
//             int s2 = total - s1;
//             minDiff = min(minDiff, abs(s2 - s1));
//         }
//     }

//     return minDiff;
// }
