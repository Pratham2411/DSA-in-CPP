// // Binary Search approach

// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> arr;
//         arr.push_back(nums[0]);
//         for (int i = 1; i < n; i++) {
//             if (nums[i] > arr.back()) {
//                 // If current number is greater than last element in arr, append it
//                 arr.push_back(nums[i]);
//             } else {
//                 // Otherwise, find the first element >= nums[i] and replace it
//                 int idx = lower_bound(arr.begin(), arr.end(), nums[i]) - arr.begin();
//                 arr[idx] = nums[i];
//             }
//         }
//         return arr.size();
//     }
// };

// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> arr;
//         arr.push_back(nums[0]);

//         for (int i = 1; i < n; i++) {
//             if (nums[i] > arr.back()) {
//                 arr.push_back(nums[i]);
//             } else {
//                 // Binary search for the first element >= nums[i]
//                 int low = 0, high = arr.size() - 1;
//                 int idx = high;  // initialize to avoid unassigned warning
//                 while (low <= high) {
//                     int mid = low + (high - low) / 2;
//                     if (arr[mid] >= nums[i]) {
//                         idx = mid;
//                         high = mid - 1;
//                     } else {
//                         low = mid + 1;
//                     }
//                 }
//                 arr[idx] = nums[i];
//             }
//         }
//         return arr.size();
//     }
// };
