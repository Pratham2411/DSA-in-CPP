#include<bits/stdc++.h>
using namespace std;
int main(){
    // Adjacencey List
    int vertex,edges;
    cin>>vertex>>edges;
    int u,v;
     vector<int> adj[vertex];
    //  vector<pair<int,int>> adj[vertex]; // for weighted graph
     for(int i=1;i<=edges;i++){
        cin>>u>>v;
        adj[u].push_back(v); // adj[u].push_back(make_pair(v,weight));
        adj[v].push_back(u);
     }
     for(int i=0;i<vertex;i++){
         cout<<i<<" -> ";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
     }
   // O(v+e) time and space O(v^2) in case of complete graph i.e. e=v^2
}
// Matrix vs List
// Add edge O(1) in both
// Delete edge O(1) in mat O(v) in list // can be optimise with map
// Edge exist  O(1) in mat O(v) in list
// Matrix is preferred for dense graphs while list for sparse graph

