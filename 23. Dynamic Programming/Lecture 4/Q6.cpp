//  https://www.naukri.com/code360/problems/0-1-knapsack_920542

// #include <bits/stdc++.h> 
// using namespace std;

// int f(int idx, int wt, vector<int> &weight, vector<int> &value, vector<vector<int>>& dp) {
//     if (idx == 0) {
//         if (wt >= weight[0]) return value[0];
//         return 0;
//     }

//     if (dp[idx][wt] != -1) return dp[idx][wt];

//     int unpick = f(idx - 1, wt, weight, value, dp);
//     int pick = (wt >= weight[idx]) ? value[idx] + f(idx - 1, wt - weight[idx], weight, value, dp) : INT_MIN;

//     return dp[idx][wt] = max(pick, unpick);
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
//     vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1)); 
//     return f(n - 1, maxWeight, weight, value, dp);
// }

// #include <bits/stdc++.h> 
// using namespace std;

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
//     vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1)); 

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= maxWeight; j++) {
//             if (j == 0) {
//                 dp[i][j] = 0;
//                 continue;
//             }

//             if (i == 0) {
//                 dp[i][j] = (j >= weight[0]) ? value[0] : 0;
//                 continue;
//             }

//             int unpick = dp[i - 1][j];
//             int pick = (j >= weight[i]) ? value[i] + dp[i - 1][j - weight[i]] : INT_MIN;
//             dp[i][j] = max(pick, unpick);
//         }
//     }

//     return dp[n - 1][maxWeight];
// }

// #include <bits/stdc++.h> 
// using namespace std;

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
//     vector<int> prev(maxWeight+1);

//     for (int i = 0; i < n; i++) {
//         vector<int> curr(maxWeight+1);
//         for (int j = 0; j <= maxWeight; j++) {
//             if (j == 0) {
//                 curr[j] = 0;
//                 continue;
//             }

//             if (i == 0) {
//                 curr[j] = (j >= weight[0]) ? value[0] : 0;
//                 continue;
//             }

//             int unpick = prev[j];
//             int pick = (j >= weight[i]) ? value[i] + prev[j - weight[i]] : INT_MIN;
//             curr[j] = max(pick, unpick);
//         }
//         prev=curr;
//     }

//     return prev[maxWeight];
// }

// #include <bits/stdc++.h> 
// using namespace std;

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
//     vector<int> dp(maxWeight + 1, 0);

//     for (int i = 0; i < n; i++) {
//         for (int j = maxWeight; j >= 0; j--) {
//             if (j >= weight[i])
//                 dp[j] = max(dp[j], value[i] + dp[j - weight[i]]);
//         }
//     }

//     return dp[maxWeight];
// }

