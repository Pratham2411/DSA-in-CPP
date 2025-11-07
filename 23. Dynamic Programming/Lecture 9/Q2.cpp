// https://leetcode.com/problems/count-square-submatrices-with-all-ones/description/

// class Solution {
// public:
//     int countSquares(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         int m = matrix[0].size();
//         int count = 0;

//         // Start from second row and column, update matrix as DP table
//         for (int i = 1; i < n; i++) {
//             for (int j = 1; j < m; j++) {
//                 if (matrix[i][j] == 1) {
//                     matrix[i][j] = 1 + min({matrix[i-1][j], matrix[i][j-1], matrix[i-1][j-1]});
//                 }
//             }
//         }

//         // Sum up all values in matrix to get count of squares
//         for (int i = 0; i < n; i++)
//             for (int j = 0; j < m; j++)
//                 count += matrix[i][j];

//         return count;
//     }
// };
