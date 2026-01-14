// BFS topo sort 
// class Solution {
// public:
//     vector<int> topoSort(int V, vector<vector<int>>& edges) {
//         vector<vector<int>> adj(V);
//         vector<int> indegree(V, 0);

//         // Build the adjacency list and indegree array
//         for (auto& edge : edges) {
//             int u = edge[0];
//             int v = edge[1];
//             adj[u].push_back(v);
//             indegree[v]++;
//         }

//         // Sort adjacency list to ensure ascending order processing
//         for (int i = 0; i < V; i++) {
//             sort(adj[i].begin(), adj[i].end());
//         }
//      // push all with zero indegree
//         queue<int> q;
//         for (int i = 0; i < V; i++) {
//             if (indegree[i] == 0) q.push(i);
//         }

//         vector<int> ans;
//         while (!q.empty()) {
//             int node = q.front();
//             q.pop();
//             ans.push_back(node);

//             for (auto neighbor : adj[node]) {
//                 indegree[neighbor]--;
//                 if (indegree[neighbor] == 0) {
//                     q.push(neighbor);
//                 }
//             }
//         }

//         // If topological sort not possible (i.e. cycle), return empty
//         if (ans.size() != V) return {};

//         return ans;
//     }
// };