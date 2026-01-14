// class Solution {
//   public:
//     bool bfs(int node,vector<bool> &visited,vector<vector<int>> &adj){
//         queue<pair<int,int>> q;
//         q.emplace(node,-1);
//         while(!q.empty()){
//             auto x=q.front();
//             q.pop();
//             for(int i=0;i<adj[x.first].size();i++){
//                 if(adj[x.first][i]==x.second) continue;
//                 if(visited[adj[x.first][i]]==1) return 1;
//                 visited[adj[x.first][i]]=1;
//                 q.emplace(adj[x.first][i],x.first);
//             }
//         }
//         return 0;
//     }
//     bool isCycle(int V, vector<vector<int>>& edges) {
//         // make adjecencey list
//         vector<vector<int>> adj(V);
//         for(auto x:edges){ 
//             adj[x[0]].push_back(x[1]); adj[x[1]].push_back(x[0]);}
            
//        // Detect cycle
//        vector<bool> visited(V,0);
//        for(int i=0;i<V;i++){
//            if(!visited[i] && bfs(i,visited,adj)) return 1;
//        }
//         return 0;
//     }
// };
