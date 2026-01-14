// class Solution {
//   public:
//     vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
//         // Step 1: Reverse the graph
//         vector<int> revAdj[V];
//         vector<int> indegree(V, 0);
        
//         for (int u = 0; u < V; u++) {
//             for (int v : adj[u]) {
//                 revAdj[v].push_back(u);
//                 indegree[u]++;
//             }
//         }

//         // Step 2: Apply BFS Topological Sort
//         queue<int> q;
//         for (int i = 0; i < V; i++) {
//             if (indegree[i] == 0)
//                 q.push(i);
//         }

//         vector<int> safe;
//         while (!q.empty()) {
//             int node = q.front();
//             q.pop();
//             safe.push_back(node);
//             for (int neighbor : revAdj[node]) {
//                 indegree[neighbor]--;
//                 if (indegree[neighbor] == 0)
//                     q.push(neighbor);
//             }
//         }

//         // Step 3: Sort the safe nodes as required
//         sort(safe.begin(), safe.end());
//         return safe;
//     }
// };
