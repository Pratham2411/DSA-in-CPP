// https://www.naukri.com/code360/problems/maximum-sum-of-non-adjacent-elements_843261
// Recursion and memoisation

// #include <bits/stdc++.h> 
//    int solve(vector<int> &nums,int idx,vector<int>&dp){
//        int n=nums.size();
//        if(idx==0) return nums[0];
//        if(idx<0) return 0;
//        if(dp[idx]!=-1) return dp[idx];
//        int pick=nums[idx]+solve(nums,idx-2,dp);
//        int unpick=0+solve(nums,idx-1,dp);
//        return dp[idx]=max(pick,unpick);
//    }
// int maximumNonAdjacentSum(vector<int> &nums){
//     int n=nums.size();
//     vector<int> dp(n,-1);
//      return solve(nums,n-1,dp);
    
// }

// Tabulation
// #include <bits/stdc++.h> 
// int maximumNonAdjacentSum(vector<int> &nums){
//     int n=nums.size();
//     vector<int> dp(n,-1);
//     dp[0]=nums[0];
//     for(int i=1;i<n;i++){
//         int pick= nums[i];
//         int unpick=dp[i-1];
//         if(i>1){
//             pick+=dp[i-2];
//         }
//         dp[i]=max(pick,unpick);
//     }
//     return dp[n-1];
// }

// Space optimise
// #include <bits/stdc++.h> 
// int maximumNonAdjacentSum(vector<int> &nums){
//     int n=nums.size();
//     int a=nums[0];  // i-1
//     int b=0;        // i-2
//     for(int i=1;i<n;i++){
//         int pick= nums[i]+b;
//         int unpick=a;
//         b=a;
//         a=max(pick,unpick);
//     }
//     return a;
// }