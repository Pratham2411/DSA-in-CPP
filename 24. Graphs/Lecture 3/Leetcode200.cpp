// Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.
// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

// class Solution {
//     public:
//         void dfs(int i, int j, vector<vector<int>> &vis, vector<vector<char>>& grid) {
//             int m = grid.size();
//             int n = grid[0].size();
//             vis[i][j] = 1;
//           if (i-1 >= 0 && grid[i-1][j] == '1' && !vis[i-1][j]) // Up
//             dfs(i-1, j, vis, grid);
//           if (i+1 < m && grid[i+1][j] == '1' && !vis[i+1][j]) // Down
//             dfs(i+1, j, vis, grid);
//           if (j-1 >= 0 && grid[i][j-1] == '1' && !vis[i][j-1]) // Left
//             dfs(i, j-1, vis, grid);
//          if (j+1 < n && grid[i][j+1] == '1' && !vis[i][j+1]) // Right
//             dfs(i, j+1, vis, grid);
//         }
    
//         int numIslands(vector<vector<char>>& grid) {  
//             int m = grid.size();
//             int n = grid[0].size();
//             vector<vector<int>> vis(m, vector<int>(n, 0));
//             int ans = 0;
    
//             for (int i = 0; i < m; i++)
//                 for (int j = 0; j < n; j++) {
//                     if (grid[i][j] == '1' && vis[i][j] == 0) {
//                         dfs(i, j, vis, grid);
//                         ans++;
//                     }
//                 }
//             return ans;
//         }
//     };

// For all 8 directions
 // Neighbour Traverse Shortcut
//  for(int delrow=-1;delreo<=1;delrow++){
//     for(int delcol=-1;delcol<=1;del++){
//         int nrow=row+delrow;
//         int ncol=col+delcol;
//         if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && !vis[nrow][ncol]) dfs(nrow,ncol,vis,grid);
//     }
//  }
    