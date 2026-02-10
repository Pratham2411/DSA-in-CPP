// https://leetcode.com/problems/minimum-cost-to-cut-a-stick/
// class Solution {
// public:
//     int f(int i, int j, vector<int>& cuts, vector<vector<int>>& dp) {
//         if (i > j) return 0;
//         if (dp[i][j] != -1) return dp[i][j];

//         int minCost = INT_MAX;

//         for (int k = i; k <= j; k++) {
//             int cost = cuts[j + 1] - cuts[i - 1] + f(i, k - 1, cuts, dp) + f(k + 1, j, cuts, dp);
//             minCost = min(minCost, cost);
//         }

//         return dp[i][j] = minCost;
//     }

//     int minCost(int n, vector<int>& cuts) {
//         // Add virtual cuts at the two ends
//         cuts.push_back(0);
//         cuts.push_back(n);
//         sort(cuts.begin(), cuts.end());

//         int c = cuts.size();
//         vector<vector<int>> dp(c, vector<int>(c, -1));
//         return f(1, c - 2, cuts, dp); // we ignore 0 and c-1 (end points)
//     }
// };

// class Solution {
// public:
//     int minCost(int n, vector<int>& cuts) {
//         cuts.push_back(0);
//         cuts.push_back(n);
//         sort(cuts.begin(), cuts.end());

//         int c = cuts.size();
//         vector<vector<int>> dp(c, vector<int>(c, 0));

//         for (int i = c - 1; i >= 0; i--) {
//             for (int j = 0; j < c; j++) {
//                 if (j - i <= 1) continue; 
//                 int minc = INT_MAX;
//                 for (int k = i + 1; k < j; k++) {
//                     int cost = cuts[j] - cuts[i] + dp[i][k] + dp[k][j];
//                     minc = min(minc, cost);
//                 }
//                 dp[i][j] = minc;
//             }
//         }

//         return dp[0][c - 1];
//     }
// };
