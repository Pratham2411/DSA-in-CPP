// There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.
// A province is a group of directly or indirectly connected cities and no other cities outside of the group.
// You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise.
// Return the total number of provinces.

// BFS
// class Solution {
//     public:
//         void bfs(vector<vector<int>>& isConnected,vector<int> &vis,int node){
//             queue<int> q;
//             q.push(node);
//             while(!q.empty()){
//                 int x=q.front();
//                 q.pop();
//                 vis[x]=1;
//                for(int i=0;i<isConnected.size();i++)
//                 if(!vis[i] && isConnected[x][i]==1)
//                  q.push(i);
//             }
//         }
//         int findCircleNum(vector<vector<int>>& isConnected) {
//             int ans=0;
//             int n=isConnected.size();
//             vector<int> vis(n,0);
//             for(int i=0;i<n;i++){
//                 if(vis[i]!=1){
//                     bfs(isConnected,vis,i);
//                     ans++;
//                 }
//             }
//             return ans;
//         }
//     };

    // DFS

    // class Solution {
    //     public:
    //         void dfs(vector<vector<int>>& isConnected,vector<int> &vis,int node){
    //             vis[node]=1;
    //              for(int i=0;i<isConnected.size();i++){
    //                 if(!vis[i])
    //                 if(isConnected[node][i]==1) dfs(isConnected,vis,i);
    //              }
    //         }
    //         int findCircleNum(vector<vector<int>>& isConnected) {
    //             int ans=0;
    //             int n=isConnected.size();
    //             vector<int> vis(n,0);
    //             for(int i=0;i<n;i++){
    //                 if(vis[i]!=1){
    //                     dfs(isConnected,vis,i);
    //                     ans++;
    //                 }
    //             }
    //             return ans;
    //         }
    //     };
