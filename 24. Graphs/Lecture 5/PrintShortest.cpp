// Print the shortest path in a weighted undirected graph
// class Solution {
//   public:
//     vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
//          vector<vector<pair<int,int>>> adj(n+1);
//          for(int i=0; i<m; i++){
//              int u = edges[i][0];
//              int v = edges[i][1];
//              int w = edges[i][2];
//              adj[u].push_back(make_pair(v, w));
//              adj[v].push_back(make_pair(u, w));
//          }
         
//         // make a parent array and a distance array
//         vector<int> par(n+1, 0);
//         vector<int> dis(n+1, 1e9);
//         par[1] = 1;
//         dis[1] = 0;
        
//         // use priority queue to fill both arrays
//         // min-heap (distance, node)
//         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
//         pq.push(make_pair(0, 1));
        
//         while(!pq.empty()){
//            pair<int,int> p = pq.top();
//            pq.pop();
//            int distance = p.first;
//            int node = p.second;
           
//            if(distance > dis[node]) continue; 
           
//            for(int j=0; j<(int)adj[node].size(); j++){
//                int nbr = adj[node][j].first;
//                int wt = adj[node][j].second;
               
//                if(dis[node] + wt < dis[nbr]) {
//                     dis[nbr] = dis[node] + wt;
//                     par[nbr] = node;
//                     pq.push(make_pair(dis[nbr], nbr));
//                }
//            }
//         }
        
//         // if no path to n
//         if(dis[n] == 1e9) return {-1};
        
//         // Now construct path from n to 1 using parent array
//         vector<int> path;
//         int curr = n;
//         while(curr != par[curr]) {
//             path.push_back(curr);
//             curr = par[curr];
//         }
//         path.push_back(1);
//         reverse(path.begin(), path.end());
        
//         // insert total distance at the beginning
//         path.insert(path.begin(), dis[n]);
        
//         return path;
//     }
// };
