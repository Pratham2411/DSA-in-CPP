// Memoisation
// #include <bits/stdc++.h> 
// int solve(int i, vector<int> &heights, vector<int> &dp) {
//     if (i == 0) return 0;
//     if (dp[i] != -1) return dp[i];

//     int jumpOne = solve(i - 1, heights, dp) + abs(heights[i] - heights[i - 1]);
//     int jumpTwo = INT_MAX;
//     if (i > 1) {
//         jumpTwo = solve(i - 2, heights, dp) + abs(heights[i] - heights[i - 2]);
//     }

//     return dp[i] = min(jumpOne, jumpTwo);
// }

// int frogJump(int n, vector<int> &heights)
// {
//     vector<int> dp(n, -1);
//     return solve(n - 1, heights, dp);
// }

// Tabulation
// #include <bits/stdc++.h>
// using namespace std;

// int frogJump(int n, vector<int> &heights, int k) {
//     vector<int> dp(n, 0);
//     dp[0] = 0;

//     for (int i = 1; i < n; ++i) {
//         dp[i] = dp[i - 1] + abs(heights[i] - heights[i - 1]); // default jump from i-1

//         for (int j = 2; j <= k; ++j) {
//             if (i - j >= 0) {
//                 int cost = dp[i - j] + abs(heights[i] - heights[i - j]);
//                 dp[i] = min(dp[i], cost); // overwrite if cheaper
//             }
//         }
//     }

//     return dp[n - 1];
// }

// space optimise
// #include <bits/stdc++.h>
// using namespace std;

// int frogJump(int n, vector<int> &heights, int k) {
//     deque<int> dp(k + 1, 0); // Sliding window of last k steps

//     for (int i = 1; i < n; ++i) {
//         int minCost = dp[0] + abs(heights[i] - heights[i - 1]);

//         for (int j = 2; j <= k && j <= i; ++j) {
//             int cost = dp[j - 1] + abs(heights[i] - heights[i - j]);
//             minCost = min(minCost, cost);
//         }

//         dp.push_front(minCost);
//         if (dp.size() > k) dp.pop_back();
//     }

//     return dp.front(); 
// }

