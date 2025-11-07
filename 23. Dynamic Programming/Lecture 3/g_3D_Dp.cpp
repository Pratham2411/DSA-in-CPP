// https://www.naukri.com/code360/problems/ninja-and-his-friends_3125885
// #include <bits/stdc++.h>
// using namespace std;

// int maxChocoUtil(int i, int j1, int j2, int r, int c, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp) {
//     // Check if either player is out of bounds
//     if (j1 < 0 || j1 >= c || j2 < 0 || j2 >= c)
//         return -1e9;

//     // Base case: last row
//     if (i == r - 1) {
//         if (j1 == j2) return grid[i][j1];
//         else return grid[i][j1] + grid[i][j2];
//     }

//     if (dp[i][j1][j2] != -1) return dp[i][j1][j2];

//     int maxi = INT_MIN;

//     // Try all 9 combinations of moves for both players
//     for (int dj1 = -1; dj1 <= 1; dj1++) {
//         for (int dj2 = -1; dj2 <= 1; dj2++) {
//             int next = maxChocoUtil(i + 1, j1 + dj1, j2 + dj2, r, c, grid, dp);
//             int val = (j1 == j2) ? grid[i][j1] : grid[i][j1] + grid[i][j2];
//             maxi = max(maxi, val + next);
//         }
//     }

//     return dp[i][j1][j2] = maxi;
// }

// int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
//     vector<vector<vector<int>>> dp(r, vector<vector<int>>(c, vector<int>(c, -1)));
//     return maxChocoUtil(0, 0, c - 1, r, c, grid, dp);
// }

// #include <bits/stdc++.h>
// using namespace std;

// int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
//     vector<vector<vector<int>>> dp(r, vector<vector<int>>(c, vector<int>(c, 0)));

//     // Base case: Fill last row
//     for (int j1 = 0; j1 < c; j1++) {
//         for (int j2 = 0; j2 < c; j2++) {
//             if (j1 == j2)
//                 dp[r - 1][j1][j2] = grid[r - 1][j1];
//             else
//                 dp[r - 1][j1][j2] = grid[r - 1][j1] + grid[r - 1][j2];
//         }
//     }

//     // Process from bottom-2 row to top
//     for (int i = r - 2; i >= 0; i--) {
//         for (int j1 = 0; j1 < c; j1++) {
//             for (int j2 = 0; j2 < c; j2++) {
//                 int maxi = INT_MIN;

//                 // Try all 9 combinations of moves
//                 for (int dj1 = -1; dj1 <= 1; dj1++) {
//                     for (int dj2 = -1; dj2 <= 1; dj2++) {
//                         int nj1 = j1 + dj1;
//                         int nj2 = j2 + dj2;

//                         if (nj1 >= 0 && nj1 < c && nj2 >= 0 && nj2 < c) {
//                             int val = (j1 == j2) ? grid[i][j1] : grid[i][j1] + grid[i][j2];
//                             val += dp[i + 1][nj1][nj2];
//                             maxi = max(maxi, val);
//                         }
//                     }
//                 }

//                 dp[i][j1][j2] = maxi;
//             }
//         }
//     }

//     return dp[0][0][c - 1];
// }


// #include <bits/stdc++.h>
// using namespace std;

// int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
//     vector<vector<int>> front(c, vector<int>(c, 0));

//     // Base case: Fill last row
//     for (int j1 = 0; j1 < c; j1++) {
//         for (int j2 = 0; j2 < c; j2++) {
//             if (j1 == j2)
//                 front[j1][j2] = grid[r - 1][j1];
//             else
//                 front[j1][j2] = grid[r - 1][j1] + grid[r - 1][j2];
//         }
//     }

//     // Bottom-up DP with space optimization
//     for (int i = r - 2; i >= 0; i--) {
//         vector<vector<int>> curr(c, vector<int>(c, 0));
//         for (int j1 = 0; j1 < c; j1++) {
//             for (int j2 = 0; j2 < c; j2++) {
//                 int maxi = INT_MIN;

//                 for (int dj1 = -1; dj1 <= 1; dj1++) {
//                     for (int dj2 = -1; dj2 <= 1; dj2++) {
//                         int nj1 = j1 + dj1;
//                         int nj2 = j2 + dj2;

//                         if (nj1 >= 0 && nj1 < c && nj2 >= 0 && nj2 < c) {
//                             int val = (j1 == j2) ? grid[i][j1] : grid[i][j1] + grid[i][j2];
//                             val += front[nj1][nj2];
//                             maxi = max(maxi, val);
//                         }
//                     }
//                 }

//                 curr[j1][j2] = maxi;
//             }
//         }
//         front = curr;
//     }

//     return front[0][c - 1];
// }

