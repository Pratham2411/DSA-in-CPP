// class Solution {
//   public:
//     vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
//         vector<vector<pair<int,int>>> adj(V);
//         for (auto &x : edges) {
//             adj[x[0]].push_back({x[1], x[2]});
//         }

//         set<pair<int,int>> s; // {distance, node}
//         vector<int> dis(V, 1e9);
//         dis[src] = 0;
//         s.insert({0, src});

//         while (!s.empty()) {
//             auto it = s.begin();
//             int distance = it->first;
//             int node = it->second;
//             s.erase(it);

//             for (int i = 0; i < adj[node].size(); ++i) {
//                 int nbr = adj[node][i].first;
//                 int wt = adj[node][i].second;
//                 int newDist = distance + wt;

//                 if (newDist < dis[nbr]) {
//                     // Remove old entry if it exists
//                     if (dis[nbr] != 1e9) {
//                         s.erase({dis[nbr], nbr});
//                     }
//                     dis[nbr] = newDist;
//                     s.insert({newDist, nbr});
//                 }
//             }
//         }

//         return dis;
//     }
// };
