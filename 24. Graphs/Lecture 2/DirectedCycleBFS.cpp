// Using Topo sort 
// class Solution {
// public:
//     bool isCyclic(int V, vector<vector<int>>& edges) {
//         // Convert edge list to adjacency list
//         vector<vector<int>> adj(V);
//         vector<int> indegree(V, 0);
//         for (auto& edge : edges) {
//             int u = edge[0];
//             int v = edge[1];
//             adj[u].push_back(v); 
//             indegree[v]++;
//         }

//         vector<bool> visited(V, false);
//        for (int i = 0; i < V; i++) {
//             sort(adj[i].begin(), adj[i].end());
//         }
//          queue<int> q;
//         for (int i = 0; i < V; i++) {
//             if (indegree[i] == 0) q.push(i);
//         }
//         if(q.empty()) return true;
//          int count=0;
//         while (!q.empty()) {
//             int node = q.front();
//             q.pop();
//            count++;
//             for (auto neighbor : adj[node]) {
//                 indegree[neighbor]--;
//                 if (indegree[neighbor] == 0) {
//                     q.push(neighbor);
//                 }
//             }
//         }

//         // If count != V, there is a cycle
//         return count != V;
//     }
// };