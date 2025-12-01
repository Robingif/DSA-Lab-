#include<iostream>
using namespace std;
#include<vector>
#include<queue>
void bfs(int start, vector<vector<int>>& adj, int n){
    vector<int> vis(n,0);
    vector<int>ans(n);
     for(int i=start; i<=n; i++){
        if(!vis[i]){
            queue<int> q;
            q.push(i);
            vis[i]=1;
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            cout<< node <<" ";
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }

        }
    }
      
    
}
int main(){
     int n, edges;
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> edges;

    vector<vector<int>> adj(n);
    

    cout << "Enter each edge (u v):\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;
    bfs(start, adj, n);
    
   

    

    return 0;
}
