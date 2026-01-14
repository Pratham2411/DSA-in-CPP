// class Solution {
// public:
//     void dfs(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& vis,
//              vector<pair<int, int>>& shape, int row, int col) {

//         vis[i][j] = 1;
//         shape.push_back({i - row, j - col});
//         int delr[] = {-1, 0, 1, 0};
//         int delc[] = {0, -1, 0, 1};

//         for (int k = 0; k < 4; k++) {
//             int nrow = i + delr[k];
//             int ncol = j + delc[k];

//             if (nrow >= 0 && nrow < grid.size() &&
//                 ncol >= 0 && ncol < grid[0].size() &&
//                 !vis[nrow][ncol] && grid[nrow][ncol] == 1) {
//                 dfs(nrow, ncol, grid, vis, shape, row, col);
//             }
//         }
//     }

//     int countDistinctIslands(vector<vector<int>>& grid) {
//         int m = grid.size(), n = grid[0].size();
//         vector<vector<int>> vis(m, vector<int>(n, 0));
//         set<vector<pair<int, int>>> shapes;

//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (grid[i][j] == 1 && !vis[i][j]) {
//                     vector<pair<int, int>> shape;
//                     dfs(i, j, grid, vis, shape, i, j);
//                     shapes.insert(shape);
//                 }
//             }
//         }
//         return shapes.size();
//     }
// };
