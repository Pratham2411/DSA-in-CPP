#include<bits/stdc++.h>
using namespace std;
int main(){
    // Adjacencey Matrix
    int vertex,edges;
    cin>>vertex>>edges;
    int u,v;
    vector<vector<bool>> adj(vertex,vector<bool>(vertex,0));   
         // for unweighted graph (take int for weigheted)
    for(int i=1;i<=edges;i++){
        cin>>u>>v; // kha se kha edge hai (also take weight input for weighted)
        adj[u][v]=1;
        adj[v][u]=1;
    }
   for(auto x:adj){
     for(auto p:x) cout<<p<<" ";
     cout<<endl;
   }
   // O(v^2) Time and space
}
