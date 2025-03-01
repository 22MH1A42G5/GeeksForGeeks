//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void DFS(int node , vector<bool>&vis ,vector<vector<int>>&adj , vector<int>&dfs){
        vis[node] = true;
        dfs.push_back(node);
        for(int i = 0 ;i < adj[node].size() ; i++){
            if(!vis[adj[node][i]]) {
                DFS(adj[node][i] , vis , adj , dfs);
            }
            
        }
        
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        vector<int>dfs;
        vector<bool>vis(adj.size() , false);
        int node = 0;
        vis[0] = true;
        DFS(node , vis , adj ,dfs);
        return dfs;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends