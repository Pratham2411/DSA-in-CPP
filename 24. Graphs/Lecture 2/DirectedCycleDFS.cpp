// // class Solution {
// public:
//     bool dfs(int node, vector<bool>& visited, vector<bool>& pathVisited, vector<vector<int>>& adj) {
//         visited[node] = true;
//         pathVisited[node] = true;

//         for (int x : adj[node]) {
//             if (!visited[x]) {
//                 if (dfs(x, visited, pathVisited, adj)) return true;
//             } else if (pathVisited[x]) {
//                 // Cycle found via back edge
//                 return true;
//             }
//         }

//         pathVisited[node] = false; 
//         return false;
//     }

//     bool isCyclic(int V, vector<vector<int>>& edges) {
//         // Convert edge list to adjacency list
//         vector<vector<int>> adj(V);
//         for (auto& edge : edges) {
//             int u = edge[0];
//             int v = edge[1];
//             adj[u].push_back(v); // directed edge u → v
//         }

//         vector<bool> visited(V, false);
//         vector<bool> pathVisited(V, false);

//         for (int i = 0; i < V; i++) {
//             if (!visited[i]) {
//                 if (dfs(i, visited, pathVisited, adj)) return true;
//             }
//         }

//         return false;
//     }
// };