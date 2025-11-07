// https://leetcode.com/problems/longest-string-chain/description/

// class Solution {
// public:
//     bool isPredecessor(string &shorter, string &longer) {
//     if (longer.size() != shorter.size() + 1) return false;

//     int i = 0, j = 0;
//     bool skipped = false;

//     while (i < shorter.size() && j < longer.size()) {
//         if (shorter[i] == longer[j]) {
//             i++; j++;
//         } else {
//             if (skipped) return false; // already skipped once
//             skipped = true;
//             j++; // skip a character from longer string
//         }
//     }
//     return true; 
// }
//     static bool cmp(string &a,string &b){
//         return a.size()<b.size();
//     }
//     int longestStrChain(vector<string>& words) {
//         int n=words.size();
//         sort(words.begin(),words.end(),cmp);
//         vector<int> dp(n,1);
//         int ans=1;
//         for(int i=0;i<n;i++){
//             for(int prev=0;prev<i;prev++){
//                 string a=words[i], b=words[prev];
//                 if(isPredecessor(b,a) && dp[prev]+1>dp[i]) dp[i]=dp[prev]+1;
//             }
//             ans=max(ans,dp[i]);
//         }
//         return ans;
//     }
// };