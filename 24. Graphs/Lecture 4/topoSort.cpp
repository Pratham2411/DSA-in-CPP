// Only in Directed Acyclic Graph
// If there is an edge between u and v, u appears before v
// class Solution {
//   public:
//    void dfs(int node,vector<bool>&vis,vector<vector<int>> &adj,stack<int> &st){
//        vis[node]=1;
//       for(auto x:adj[node]) if (!vis[x]) dfs(x, vis, adj, st);
//         st.push(node);
//    }
//     vector<int> topoSort(int V, vector<vector<int>>& edges) {
//         vector<vector<int>> adj(V);
//        for (auto& edge : edges) {
//     int u = edge[0];
//     int v = edge[1];
//     adj[u].push_back(v);
//      }
//     // sort adj 
//     for (int i = 0; i < V; ++i) {
//             sort(adj[i].begin(), adj[i].end());
//         }

//         vector<bool> vis(V, false);
//         stack<int> st;
//         for(int i=0;i<V;i++){
//             if(!vis[i]) dfs(i,vis,adj,st);
//         }
//         vector<int> ans;
        
//         while(!st.empty()){
//             ans.push_back(st.top());
//             st.pop();
        
//         }
//         return ans;
//     }
// };

