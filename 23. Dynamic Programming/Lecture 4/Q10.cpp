// https://www.naukri.com/code360/problems/unbounded-knapsack_1215029?leftPanelTabValue=SUBMISSION
// int f(int idx, int wt, vector<int> &profit, vector<int> &weight, vector<vector<int>> &dp) {
//     if (idx == 0) {
//         if (weight[0] <= wt)
//             return (wt / weight[0]) * profit[0]; 
//         else return 0;
//     }

//     if (dp[idx][wt] != -1) return dp[idx][wt];

//     int notTake = f(idx - 1, wt, profit, weight, dp);
//     int take = 0;
//     if (weight[idx] <= wt)
//         take = profit[idx] + f(idx, wt - weight[idx], profit, weight, dp); 

//     return dp[idx][wt] = max(take, notTake);
// }

// int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
//     vector<vector<int>> dp(n, vector<int>(w + 1, -1));
//     return f(n - 1, w, profit, weight, dp);
// }

// int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight) {
//     vector<int> dp(w + 1, 0);

//     // Base case: fill dp using the 0th item only
//     for (int wt = weight[0]; wt <= w; ++wt) {
//         dp[wt] = (wt / weight[0]) * profit[0];
//     }

//     for (int i = 1; i < n; ++i) {
//         for (int wt = weight[i]; wt <= w; ++wt) {
//             dp[wt] = max(dp[wt], profit[i] + dp[wt - weight[i]]);
//         }
//     }

//     return dp[w];
// }

