//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    bool BFS(vector<vector<int>>adj , int i , vector<int>vis){
        queue<pair<int,int>>que;
        vis[i] = true;
        que.push({i , -1});
        while(!que.empty()){
            int node = que.front().first;
            int parent = que.front().second;
            que.pop();
            for(auto adjacentNode: adj[node]) {
              if(!vis[adjacentNode]) {
                  vis[adjacentNode] = 1; 
                  que.push({adjacentNode, node}); 
              }
              else if(parent != adjacentNode) {
                  return true; 
              }
          }
        }
        return false;
    }
    public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        vector<int>vis(adj.size() , false);
        for(int i = 0 ; i < adj.size() ; i++){
            if(!vis[i]){
                if(BFS(adj , i , vis)) return true;
            }
        }
        return false;
        
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends