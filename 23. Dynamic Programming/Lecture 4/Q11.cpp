// https://www.naukri.com/code360/problems/rod-cutting-problem_800284

//     int f(int idx, int length, vector<int>& price, vector<vector<int>>& dp) {
//     if (idx == 0) return length*price[0];

//     if (dp[idx][length] != -1) return dp[idx][length];

//     int notcut = f(idx - 1, length, price, dp);
//     int cut = INT_MIN;
//     if (idx+1 <= length)
//         cut = price[idx] + f(idx, length - (idx + 1), price, dp);
//     return dp[idx][length] = max(cut,notcut);
// }  
// int cutRod(vector<int> &price, int n)
// { 
// 	vector<vector<int>> dp(n, vector<int>(n + 1, -1));
//     return f(n-1,n,price,dp);
// }

// int cutRod(vector<int> &price, int n)
// {    
// 	vector<vector<int>> dp(n, vector<int>(n + 1, -1));
//     for(int i = 0; i < n; i++) {
//     for(int j = 0; j <= n; j++) {
//         if(i == 0) {
//             dp[i][j] = j * price[0];
//         } else {
//             int notcut = dp[i - 1][j];
//             int cut = INT_MIN;
//             if(i + 1 <= j) cut = price[i] + dp[i][j - (i + 1)];
//             dp[i][j] = max(cut, notcut);
//         }
//     }
// }
//     return dp[n-1][n];
// }

// int cutRod(vector<int> &price, int n)
// {
//     vector<int> dp(n + 1, 0);
    
//     // Base case for idx = 0
//     for(int j = 0; j <= n; j++) {
//         dp[j] = j * price[0];
//     }

//     for(int i = 1; i < n; i++) {
//         for(int j = 0; j <= n; j++) {
//             int notcut = dp[j];
//             int cut = INT_MIN;
//             if(i + 1 <= j) cut = price[i] + dp[j - (i + 1)];
//             dp[j] = max(cut, notcut);
//         }
//     }

//     return dp[n];
// }
