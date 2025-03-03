//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void CountPaths(int st , int des , vector<vector<int>>&adj , vector<bool>&vis , int &cnt){
        if(st == des){
            cnt++;
            return;
        }
        vis[st] = true;
        for(int i = 0 ; i < adj[st].size() ; i++){
            if(!vis[adj[st][i]])
            CountPaths(adj[st][i] , des , adj , vis , cnt);
        }
        vis[st] = false;
    }
    int possible_paths(vector<vector<int>> &ed, int n, int st, int des) {
        // Code here
        vector<vector<int>>adjList(n);
        for(int i = 0 ; i < ed.size() ; i++){
            adjList[ed[i][0]].push_back(ed[i][1]);
        }
        // for(int i = 0 ; i < adjList.size() ; i++){
        //     // cout <hhh< ihhh << " ";
        //     for(int j = 0 ; j < adjList[i].size() ; j++){
        //         cout << adjList[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        vector<bool>vis(n , false);
        int cnt = 0;
        CountPaths(st , des , adjList , vis , cnt);
        return cnt;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m, s, d;
        cin >> n >> m >> s >> d;
        vector<vector<int>> edges;
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }
        Solution obj;
        int ans = obj.possible_paths(edges, n, s, d);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends