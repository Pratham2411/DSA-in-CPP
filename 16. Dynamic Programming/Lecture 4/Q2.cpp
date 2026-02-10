// https://leetcode.com/problems/partition-equal-subset-sum/
// Same as Q1 

// class Solution {
// public:
//     bool canPartition(vector<int>& arr) {
//         int n=arr.size();
//         int sum=0;
//         for(auto x:arr) sum+=x;
//         if (sum % 2 != 0) return false;  
//         int k = sum / 2;
//         vector<bool> prev(k+1,0);
//       for (int i = 0; i < n; i++) {
//         vector<bool> curr(k+1,0);
//         for (int j = 0; j <= k; j++) {
//             if (j == 0) curr[j] = true;  
//             else if (i == 0) curr[j] = (arr[0] == j);
//             else {
//                 bool unpick =prev[j];
//                 bool pick = (j >= arr[i]) ? prev[j - arr[i]] : false;
//                 curr[j] = (pick || unpick);
//             }      
//         }
//          prev=curr;
//     }
//      return prev[k];
//     }
// };
