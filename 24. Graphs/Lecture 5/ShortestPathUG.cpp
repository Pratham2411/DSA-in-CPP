// class Solution {
//   public:
//     vector<int> shortestPath(vector<vector<int>>& adj, int src) {
//         int V = adj.size();
//         vector<bool> vis(V, false);
//         vector<int> dis(V, -1);

//         dis[src] = 0;
//         queue<int> q;
//         q.push(src);
//         vis[src] = true;

//         while (!q.empty()) {
//             int node = q.front();
//             q.pop();

//             for (auto x : adj[node]) {
//                 if (!vis[x]) {
//                     vis[x] = true;
//                     dis[x] = dis[node] + 1;
//                     q.push(x);
//                 }
//             }
//         }

//         return dis;
//     }
// };
