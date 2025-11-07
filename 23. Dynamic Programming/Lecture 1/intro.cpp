// Top down : Recursion + memoisation
// Bottom up : Tabulation method, iterative (base case ->ans)
// 1D Dp: only one variable change in recursive call, need to create 1d vector
// 2D Dp: two variable change in recursive call, need to create 2d vector

// Fibonacii number : 
// class Solution {
// public:
//     // int solveusingrec(int n){
//     //     if(n==0||n==1) return n;
//     //     int ans=solveusingrec(n-1)+solveusingrec(n-2);
//     //     return ans;
//     // }


//     // top down approach (rec + memoisation)

//   int solve(int n,vector<int> &dp){
//     if(n==0 || n==1){
//         return n;
//     }
//     // Step 3: If ans already exists return it
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     // Step 2: Store and return using dp array
//     return dp[n]=solve(n-1,dp)+solve(n-2,dp);
// }

//     int fib(int n) {
//         // Step 1 : Create dp array
//         vector<int> dp(n+1,-1);
//         int ans=solve(n,dp);
//         return ans;
//     }
// };


// class Solution {
// public:
// // Bottom up approach, tabulation
// // Step 1: Create a dp array
// // Step 2: Fill it using base cases
// // Step 3: Fill the rest dp array with recursion

//     int solve(int n){
//         vector<int> dp(n+1,-1);
//         dp[0]=0; dp[1]=1;
//         for(int i=2;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
//         return dp[n];

//     }

//     int fib(int n) {
//         if(n==0||n==1) return n;
//          return solve(n);
//     }
// };
// Bottom up approach, tabulation with space optimisation
// class Solution {
//   public:
//     int nthFibonacci(int n) {
//         if(n==0||n==1) return n;
//         int a=0,b=1;
//         for(int i=2;i<=n;i++){
//            int c=a+b;
//             a=b;
//             b=c;
//         } 
//         return b;
        
//     }
// };