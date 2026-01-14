// You are given an m x n grid where each cell can have one of three values:
// 0 representing an empty cell,
// 1 representing a fresh orange, or
// 2 representing a rotten orange.
// Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.
// Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.
// class Solution {
//     public:
//         int orangesRotting(vector<vector<int>>& grid) {
//             int m = grid.size();
//             int n = grid[0].size();
//             queue<pair<pair<int,int>,int>> q;
//             vector<vector<int>> vis(m, vector<int>(n, 0));
//             int fresh = 0;
//             for(int i = 0; i < m; i++) {
//                 for(int j = 0; j < n; j++) {
//                     if(grid[i][j] == 2) {
//                         q.push({{i, j}, 0});
//                         vis[i][j] = 1;
//                     } else if(grid[i][j] == 1) {
//                         fresh++;
//                     }
//                 }
//             }
    
//             int time = 0;
//             vector<int> delr = {-1, 0, 1, 0};
//             vector<int> delc = {0, 1, 0, -1};
//             int cnt = 0;
    
//             while(!q.empty()) {
//                 int row = q.front().first.first;
//                 int col = q.front().first.second;
//                 int t = q.front().second;
//                 q.pop();
//                 time = max(time, t);
    
//                 for(int k = 0; k < 4; k++) {
//                     int nrow = row + delr[k];
//                     int ncol = col + delc[k];
//                     if(nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && 
//                        grid[nrow][ncol] == 1 && !vis[nrow][ncol]) {
//                         q.push({{nrow, ncol}, t + 1});
//                         vis[nrow][ncol] = 1;
//                         cnt++;
//                     }
//                 }
//             }
    
//             return (cnt == fresh) ? time : -1;
//         }
//     };
    