// https://leetcode.com/problems/edit-distance/description/
// class Solution {
// private:
// int f(int i,int j,string&s,string&t,vector<vector<int>> &dp){
//     if(j==0) return i;
//     if(i==0) return j;
//     if(dp[i][j]!=-1) return dp[i][j];
//     if(s[i-1]==t[j-1]) return dp[i][j]=f(i-1,j-1,s,t,dp);
//     else return dp[i][j]= 1+min(f(i-1,j,s,t,dp),min(f(i-1,j-1,s,t,dp),f(i,j-1,s,t,dp)));
// }
// public:
//     int minDistance(string s, string t) {
//          int n=s.size(),m=t.size();
//         vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
//         return f(n,m,s,t,dp);
//     }
// };

// class Solution {
// public:
//     int minDistance(string s, string t) {
//          int n=s.size(),m=t.size();
//         vector<vector<int>> dp(n+1,vector<int>(m+1,0));
//         for(int i=0;i<=n;i++) dp[i][0]=i;
//         for(int j=0;j<=m;j++) dp[0][j]=j;
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=m;j++){
//                if(s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1];
//                else{
//                 dp[i][j]= 1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
//                }
//             }
//         }
//          return dp[n][m];
//     }
// };

// class Solution {
// public:
//     int minDistance(string s, string t) {
//          int n=s.size(),m=t.size();
//         vector<int> prev(m + 1), curr(m + 1);
//         for (int j = 0; j <= m; j++) prev[j] = j;
//         for(int i=1;i<=n;i++){
//             curr[0]=i;
//             for(int j=1;j<=m;j++){
//                if(s[i-1]==t[j-1]) curr[j]=prev[j-1];
//                else{
//                 curr[j]= 1+min(prev[j-1],min(prev[j],curr[j-1]));
//                }
//             }
//             prev=curr;
//         }
//          return prev[m];
//     }
// };

// class Solution {
// public:
//     int minDistance(string s, string t) {
//          int n=s.size(),m=t.size();
//         vector<int> prev(m + 1);
//         for (int j = 0; j <= m; j++) prev[j] = j;
//         for(int i=1;i<=n;i++){
//             int prevDiagonal = prev[0]; 
//             prev[0]=i;
//             for(int j=1;j<=m;j++){
//                 int temp=prev[j];
//                if(s[i-1]==t[j-1]) prev[j]= prevDiagonal;
//                else prev[j]= 1+min(prev[j-1],min(prev[j], prevDiagonal));
//                prevDiagonal=temp;
//             }
           
//         }
//          return prev[m];
//     }
// };