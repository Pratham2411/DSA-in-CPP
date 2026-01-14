// class Solution {
//   public:  TC:- E logv
// Not works on negative weight
//     vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
//         // Using Priority Queue
//         // Minheap to store pair of Distance,Node
//         vector<vector<pair<int,int>>> adj(V);
//        for(auto &x : edges){
//            adj[x[0]].emplace_back(x[1], x[2]);
//        }
       
//       
//        vector<int> dis(V,1e9);
//        pq.emplace(0,src); // distance,node
//        dis[src]=0;
//        while(!pq.empty()){
//            auto x=pq.top(); pq.pop();
//            int node=x.second; int distance=x.first;
//            if(dis[node]<distance) continue;
//            for(auto y:adj[node]){
//                int dist=dis[node] + y.second;
//                if(dist<dis[y.first]){
//                    dis[y.first]=dist;
//                    pq.emplace(dist,y.first);
//                }
//            }
//        }
//        return dis;
        
//     }
// };
