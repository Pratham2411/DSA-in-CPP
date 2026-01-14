// You are given an image represented by an m x n grid of integers image, where image[i][j] represents the pixel value of the image. You are also given three integers sr, sc, and color. Your task is to perform a flood fill on the image starting from the pixel image[sr][sc].
// To perform a flood fill:
// Begin with the starting pixel and change its color to color.
// Perform the same process for each pixel that is directly adjacent (pixels that share a side with the original pixel, either horizontally or vertically) and shares the same color as the starting pixel.
// Keep repeating this process by checking neighboring pixels of the updated pixels and modifying their color if it matches the original color of the starting pixel.
// The process stops when there are no more adjacent pixels of the original color to update.
// Return the modified image after performing the flood fill.

// class Solution {
//     public:
//         void dfs(int i, int j, vector<vector<int>> &vis, vector<vector<int>>& image, int color,int val,vector<int> &delr,vector<int> &delc) {
//             int m = image.size();
//             int n = image[0].size();
//             vis[i][j] = 1;
//             image[i][j]=color;
//            for(int k=0;k<4;k++){
//              int nrow=i+delr[k];
//              int ncol=j+delc[k];
//              if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && image[nrow][ncol]==val && !vis[nrow][ncol]) dfs(nrow,ncol,vis,image,color,val,delr,delc);
//            }
//         }
//         vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//             int m = image.size();
//             int n = image[0].size();
//             vector<vector<int>> vis(m, vector<int>(n, 0));
//             int val=image[sr][sc];
//              vector<int> delr={-1,0,1,0};
//             vector<int> delc={0,1,0,-1};
//             dfs(sr,sc,vis,image,color,val,delr,delc);
//                 return image;
//         }
//     };