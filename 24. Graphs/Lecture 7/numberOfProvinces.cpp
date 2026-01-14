// class Solution {
//   private:
//     static int findpar(int node, vector<int>& par) {
//         if (par[node] == node) return node;
//         return par[node] = findpar(par[node], par);
//     }

//     static void Union(int u, int v, vector<int>& par, vector<int>& size) {
//         int ulp_u = findpar(u, par);
//         int ulp_v = findpar(v, par);
//         if (ulp_u == ulp_v) return;

//         if (size[ulp_u] < size[ulp_v]) {
//             par[ulp_u] = ulp_v;
//             size[ulp_v] += size[ulp_u];
//         } else {
//             par[ulp_v] = ulp_u;
//             size[ulp_u] += size[ulp_v];
//         }
//     }    
//   public:
//     int numProvinces(vector<vector<int>> adj, int V) {
//         // count the number of unique ultimate parents
//         vector<int> par(V);
//         vector<int> size(V, 1);
//         for (int i = 0; i < V; i++) par[i] = i;
//         for (int i = 0; i < V; i++) {
//             for (int j = 0; j < V; j++) {
//                 if (adj[i][j] == 1 && i != j) {
//                     Union(i, j, par, size);
//                 }
//             }
//         }
//         int cnt=0;
//        for (int i = 0; i < V; i++) {
//             if(findpar(i,par)==i) cnt++;
//         }
//         return cnt;        
//     }
// };