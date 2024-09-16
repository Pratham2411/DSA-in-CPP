// There is an integer array nums sorted in ascending order (with distinct values).
// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1

// Dry Run it. imp hai.

// class Solution {
// public:
//     int search(vector<int>& arr, int target) {
//         int n= arr.size();
//         int lo =0;
//         int hi = n-1;
//         while(lo<=hi){
//            int mid = lo+(hi-lo)/2;
//            if(arr[mid]==target){
//             return mid;
//             break;
//            }
//            else if(arr[mid]<=arr[hi]){ // is the portion(mid - hi) sorted
//                 if(target>=arr[mid]&& target<=arr[hi])  lo = mid+1;              
//                 else hi = mid-1;
//            }
//            else { // (lo - mid) is sorted
//               if(target>=arr[lo]&& target<=arr[mid])  hi = mid-1;
//                else lo = mid+1;    

                
//            }
//         }
//         return -1;
//     }
// };