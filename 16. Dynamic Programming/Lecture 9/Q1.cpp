// https://leetcode.com/problems/maximal-rectangle/description/
// class Solution {
// private:
//     int largestRectangleArea(vector<int> &histo) {
//         stack<int> st;
//         int maxA = 0;
//         int n = histo.size();
//         for (int i = 0; i <= n; i++) {
//             while (!st.empty() && (i == n || histo[st.top()] >= histo[i])) {
//                 int height = histo[st.top()];
//                 st.pop();
//                 int width = st.empty() ? i : i - st.top() - 1;
//                 maxA = max(maxA, width * height);
//             }
//             st.push(i);
//         }
//         return maxA;
//     }
// public:
//     int maximalRectangle(vector<vector<char>>& matrix) {
//         if(matrix.empty()) return 0;
//         int n = matrix.size(), m = matrix[0].size();
//         int maxArea = 0;
//         vector<int> arr(m, 0);
        
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (matrix[i][j] == '1') 
//                     arr[j]++;
//                 else 
//                     arr[j] = 0;
//             }
//             maxArea = max(maxArea, largestRectangleArea(arr));
//         }
//         return maxArea;
//     }
// };
