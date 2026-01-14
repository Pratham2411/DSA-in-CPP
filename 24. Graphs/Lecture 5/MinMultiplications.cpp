// Given start, end and an array arr of n numbers. At each step, start is multiplied with any number in the array and then mod operation with 100000 is done to get the new start.
// Your task is to find the minimum steps in which end can be achieved starting from start. If it is not possible to reach end, then return -1.
// class Solution {
//   public:
//     int minimumMultiplications(vector<int>& arr, int start, int end) {
//         const int MOD = 100000;
//         vector<int> dist(MOD, INT_MAX);
//         queue<pair<int, int>> q; 
//         q.push(make_pair(start, 0));
//         dist[start] = 0;

//         while (!q.empty()) {
//             pair<int, int> current = q.front();
//             q.pop();
//             int product = current.first;
//             int steps = current.second;

//             if (product == end) return steps;

//             for (int num : arr) {
//                 int newProduct = (product * num) % MOD;
//                 if (dist[newProduct] > steps + 1) {
//                     dist[newProduct] = steps + 1;
//                     q.push(make_pair(newProduct, steps + 1));
//                 }
//             }
//         }
//         return -1;
//     }
// };
