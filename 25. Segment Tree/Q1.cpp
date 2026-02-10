// https://www.geeksforgeeks.org/problems/sum-of-query-ii5310/0

// class Solution {
//   public:
//     void build(int arr[], vector<int>& tree, int i, int low, int high) {
//         if (low == high) {
//             tree[i] = arr[low];
//         } else {
//             int mid = (low + high) / 2; 
//             build(arr, tree, 2 * i + 1, low, mid);
//             build(arr, tree, 2 * i + 2, mid + 1, high);
//             tree[i] = tree[2 * i + 1] + tree[2 * i + 2];
//         }
//     }

//     int query(vector<int>& tree, int i, int low, int high, int l, int r) {
//         if (r < low || high < l)
//             return 0;

//         if (l <= low && high <= r)
//             return tree[i];

//         int mid = (low + high) / 2;
//         return query(tree, 2 * i + 1, low, mid, l, r) +
//                query(tree, 2 * i + 2, mid + 1, high, l, r);
//     }

//     vector<int> querySum(int n, int arr[], int q, int queries[]) {
//         vector<int> ans;
//         vector<int> tree(4 * n);

//         build(arr, tree, 0, 0, n - 1);

//         for (int i = 0; i < 2 * q; i += 2) {
//             int x = query(tree, 0, 0, n - 1, queries[i]-1, queries[i + 1]-1);
//             ans.push_back(x);
//         }
//         return ans;
//     }
// };

