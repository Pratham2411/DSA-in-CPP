// class Solution {
//   public:
//     bool dfs(int node, vector<bool> &visited, vector<vector<int>> &adj, int parent) {
//         visited[node] = true;

//         for (int x : adj[node]) {
//             if (x == parent) continue;
//             if (visited[x]) return true;  // Cycle detected
//             if (dfs(x, visited, adj, node)) return true;  // Recursively check
//         }

//         return false;  // No cycle found in this path
//     }

//     bool isCycle(int V, vector<vector<int>>& edges) {
//         // Create adjacency list
//         vector<vector<int>> adj(V);
//         for (auto &x : edges) {
//             adj[x[0]].push_back(x[1]);
//             adj[x[1]].push_back(x[0]);
//         }

//         // Detect cycle using DFS
//         vector<bool> visited(V, false);
//         for (int i = 0; i < V; i++) {
//             if (!visited[i] && dfs(i, visited, adj, -1)) return true;  // Start DFS from unvisited node
//         }

//         return false;  // No cycle found in the graph
//     }
// };
