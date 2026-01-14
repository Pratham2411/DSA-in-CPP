#include<bits/stdc++.h>
using namespace std;
int main(){
    // Adjacencey List using unordered map
    int vertex,edges;
    cin>>vertex>>edges;
    int u,v,weight;
     vector<unordered_map<int, int>> adj(vertex);   // map(node,weight)
     for(int i=1;i<=edges;i++){
        cin>>u>>v>>weight;
        adj[u][v]=weight;
        adj[v][u]=weight;  
     }
     for(int i=0;i<vertex;i++){
         cout<<i<<" -> ";
        for(auto x:adj[i]){
           cout<<"("<<x.first<<","<<x.second<<")"<< " ";
        }
        cout<<endl;
     }
   
}


