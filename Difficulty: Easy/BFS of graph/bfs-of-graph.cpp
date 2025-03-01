//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        vector<int>bfs;
        bfs.push_back(0);
        queue<int>que;
        que.push(0);
        vector<bool> vis(adj.size() + 1);
        vis[0] = true;
        while(!que.empty()){
            for(int i = 0 ; i < adj[que.front()].size() ; i++){
                int p = adj[que.front()][i];
                if(!vis[p]){
                    que.push(p);
                    vis[p] = true;
                    bfs.push_back(p);
                }
            }
            que.pop();
        }
        return bfs;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        // Now using vector of vectors instead of array of vectors
        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // For undirected graph, add both u->v and v->u
        }

        Solution obj;
        vector<int> ans = obj.bfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends