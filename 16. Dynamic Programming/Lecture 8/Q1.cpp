// Partition DP, MCM DP
//https://www.naukri.com/code360/problems/matrix-chain-multiplication_975344?leftPanelTabValue=PROBLEM
// #include <bits/stdc++.h> 
// int f(int i,int j,vector<int>&arr,vector<vector<int>>&dp){
//     if(i==j) return 0;
//     if(dp[i][j]!=-1) return dp[i][j];
//     int mins=INT_MAX;
//     for(int k=i;k<j;k++){
//         int cost=arr[i-1]*arr[k]*arr[j]+f(i,k,arr,dp)+f(k+1,j,arr,dp);
//         mins=min(mins,cost);
//     }
//     return dp[i][j]=mins;
// }
// int matrixMultiplication(vector<int> &arr, int N)
// {
//     // try all posibble partitions and take the minimum
//     vector<vector<int>> dp(N,vector<int>(N,-1));
//     return f(1,N-1,arr,dp);
// }