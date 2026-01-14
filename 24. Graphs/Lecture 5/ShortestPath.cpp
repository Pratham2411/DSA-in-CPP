// class Solution {
//   public:
//   void dfs(int node, vector<bool>& vis, vector<vector<pair<int,int>>>& adj, stack<int>& st){
//       vis[node] = true;
//       for(auto x : adj[node]) {
//           if(!vis[x.first]) 
//               dfs(x.first, vis, adj, st);
//       }
//       st.push(node);
//   }

//   vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
//        vector<vector<pair<int,int>>> adj(V);
//        for(auto &x : edges){
//            adj[x[0]].emplace_back(x[1], x[2]);
//        }

//        vector<bool> vis(V, false);
//        vector<int> dis(V, -1);
//        dis[0] = 0;
//        stack<int> st;

//        for(int i = 0; i < V; i++){
//            if(!vis[i]) dfs(i, vis, adj, st);
//        }

//        while(!st.empty()){
//            int node = st.top(); st.pop();
//            if(dis[node] == -1) continue;

//            for(auto x : adj[node]){
//                int neighbor = x.first;
//                int weight = x.second;

//                if(dis[neighbor] == -1) 
//                    dis[neighbor] = dis[node] + weight;
//                else if(dis[neighbor] > dis[node] + weight)
//                    dis[neighbor] = dis[node] + weight;
//            }
//        }
//        return dis;
//   }
// };
