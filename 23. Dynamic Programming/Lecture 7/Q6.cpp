// https://www.naukri.com/code360/problems/longest-bitonic-sequence_1062688
// int longestBitonicSubsequence(vector<int>& arr, int n) {
//     vector<int> lis(n, 1);  // LIS from left
//     vector<int> lds(n, 1);  // LDS from right

//     // Step 1: Compute LIS
//     for (int i = 0; i < n; i++) {
//         for (int prev = 0; prev < i; prev++) {
//             if (arr[i] > arr[prev] && lis[prev] + 1 > lis[i]) {
//                 lis[i] = lis[prev] + 1;
//             }
//         }
//     }

//     // Step 2: Compute LDS
//     for (int i = n - 1; i >= 0; i--) {
//         for (int next = n - 1; next > i; next--) {
//             if (arr[i] > arr[next] && lds[next] + 1 > lds[i]) {
//                 lds[i] = lds[next] + 1;
//             }
//         }
//     }

//     // Step 3: Compute max of lis[i] + lds[i] - 1
//     int maxl = 0;
//     for (int i = 0; i < n; i++) {
//         maxLen = max(maxl, lis[i] + lds[i] - 1);
//     }

//     return maxl;
// }
