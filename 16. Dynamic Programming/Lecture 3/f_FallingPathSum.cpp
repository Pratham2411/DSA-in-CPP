// https://leetcode.com/problems/minimum-falling-path-sum/description/
// class Solution {
// private:
//     int f(int i, int j, vector<vector<int>>& dp, vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         if (j < 0 || j >= n) return 1e9;
//         if (i == 0) return matrix[0][j];
//         if (dp[i][j] != -1) return dp[i][j];
//         int upLeft = f(i - 1, j - 1, dp, matrix);
//         int up = f(i - 1, j, dp, matrix);
//         int upRight = f(i - 1, j + 1, dp, matrix);

//         return dp[i][j] = matrix[i][j] + min({upLeft, up, upRight});
//     }
// public:
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         vector<vector<int>> dp(n, vector<int>(n, -1));
//         int ans = INT_MAX;
//         for (int j = 0; j < n; ++j) {
//             ans = min(ans, f(n - 1, j, dp, matrix));
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         vector<vector<int>> dp = matrix;
//         for (int i = 1; i < n; ++i) {
//             for (int j = 0; j < n; ++j) {
//                 int upLeft = (j > 0) ? dp[i - 1][j - 1] : 1e9;
//                 int up = dp[i - 1][j];
//                 int upRight = (j < n - 1) ? dp[i - 1][j + 1] : 1e9;

//                 dp[i][j] += min({upLeft, up, upRight});
//             }
//         }

//         return *min_element(dp[n - 1].begin(), dp[n - 1].end());
//     }
// };

// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         vector<int> prev = matrix[0];
//         for (int i = 1; i < n; ++i) {
//             vector<int> curr=matrix[i];
//             for (int j = 0; j < n; ++j) {
//                 int upLeft = (j > 0) ?prev[j - 1] : 1e9;
//                 int up = prev[j];
//                 int upRight = (j < n - 1) ?prev[j + 1] : 1e9;

//                 curr[j] += min({upLeft, up, upRight});
//             }
//             prev=curr;
//         }
//         return *min_element(prev.begin(), prev.end());
//     }
// };
