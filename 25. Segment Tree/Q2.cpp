// https://www.geeksforgeeks.org/problems/range-minimum-query/1
// void build(int arr[], int st[], int i, int low, int high) {
//     if (low == high) {
//         st[i] = arr[low];
//         return;
//     }

//     int mid = (low + high) / 2;
//     build(arr, st, 2 * i + 1, low, mid);
//     build(arr, st, 2 * i + 2, mid + 1, high);

//     st[i] = min(st[2 * i + 1], st[2 * i + 2]);
// }

// int query(int st[], int i, int low, int high, int l, int r) {
//     // No overlap
//     if (r < low || high < l)
//         return INT_MAX;

//     // Complete overlap
//     if (l <= low && high <= r)
//         return st[i];

//     // Partial overlap
//     int mid = (low + high) / 2;
//     return min(
//         query(st, 2 * i + 1, low, mid, l, r),
//         query(st, 2 * i + 2, mid + 1, high, l, r)
//     );
// }

// int* constructST(int arr[], int n) {
//     int* st = new int[4 * n];
//     build(arr, st, 0, 0, n - 1);
//     return st;
// }

// int RMQ(int st[], int n, int a, int b) {
//     return query(st, 0, 0, n - 1, a, b);
// }
