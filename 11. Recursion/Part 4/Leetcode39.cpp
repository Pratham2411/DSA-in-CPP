// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.
// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
// frequency
//  of at least one of the chosen numbers is different.
// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]

// class Solution {
// public:
//    void combination( vector<vector<int>>&ans,vector<int> v, vector<int>& candidates, int target, int idx){
//         if(target==0){
//             ans.push_back(v);
//             return;
//         }
//         if(target<0) return;
//         for(int i=idx;i<candidates.size();i++){
//             v.push_back(candidates[i]);
//             combination(ans,v,candidates,target-candidates[i],i);
//             v.pop_back();
//         }
//    }
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         // Jitna Array ka size utne calls
//       vector<vector<int>> ans;
//       vector<int> v;
//        combination(ans,v, candidates,target,0);
//        return ans;

//     }
// };