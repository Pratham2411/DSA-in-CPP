// Recursive
// class Solution {
//     int solve(vector<int>& nums,int index,vector<int>& dp){
//         if(index >=nums.size()){
//             return 0;
//         }
//         if(dp[index]!=-1){
//             return dp[index];
//         }
//         int pick=nums[index]+solve(nums,index+2,dp);
//         int unpick=0 + solve(nums,index+1,dp);
//         return dp[index] = max(pick,unpick);
//     }
// public:
//     int rob(vector<int>& nums) {
//         int index=0;
//         int n=nums.size();
//         vector<int>dp(n,-1);
//         return solve(nums,index,dp);
//     }
// };

// Iterative
// class Solution {
//     int solve(vector<int>& nums){
//          int n=nums.size();
//         vector<int>dp(n,-1);
//         dp[n-1]=nums[n-1];
//         for(int i=n-2;i>=0;i--){
//             int temp=0;
//             if(i+2<n) temp=dp[i+2];
//             int pick=nums[i]+temp;
//             int unpick=0+ dp[i+1];
//             dp[i]=max(pick,unpick);
//         }
//         return dp[0];
//     }
// public:
//     int rob(vector<int>& nums) {
//       int n=nums.size();
//         return solve(nums);
//     }
// };

// Optimisation
// class Solution {
//     int solve(vector<int>& nums){
//          int n=nums.size();
//          int prev=nums[n-1]; int next; int curr;
//         for(int i=n-2;i>=0;i--){
//             int temp=0;
//             if(i+2<n) temp=next;
//             int pick=nums[i]+temp;
//             int unpick=0+ prev;
//             curr=max(pick,unpick);
//             next=prev;
//             prev=curr;
//         }
//         return curr;
//     }
// public:
//     int rob(vector<int>& nums) {
//       int n=nums.size();
//       if(n==1) return nums[0]; 
//         return solve(nums);
//     }
// };