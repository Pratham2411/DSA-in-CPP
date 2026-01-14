// n-1 relaxations
// If there is a cycle, the distance array will change even after n-1 th relaxation

// class Solution {
//   public:
//     vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
//         vector<int> dist(V, 1e8); 
//         dist[src] = 0;

//         // Relax all edges V-1 times
//         for (int i = 0; i < V - 1; i++) {
//             for (auto edge : edges) {
//                 int u = edge[0];
//                 int v = edge[1];
//                 int wt = edge[2];
//                 if (dist[u] != 1e8 && dist[u] + wt < dist[v]) {
//                     dist[v] = dist[u] + wt;
//                 }
//             }
//         }

//         // Check for negative-weight cycles
//         for (auto edge : edges) {
//             int u = edge[0];
//             int v = edge[1];
//             int wt = edge[2];
//             if (dist[u] != 1e8 && dist[u] + wt < dist[v]) {
//                 return { -1 };  // Negative cycle detected
//             }
//         }

//         return dist;
        
//     }
// };
