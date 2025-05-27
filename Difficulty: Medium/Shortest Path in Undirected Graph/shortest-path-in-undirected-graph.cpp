class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        queue<int>que;
        vector<int>vis(adj.size(),-1);
        vis[src] = 0;
        que.push(src);
        int cnt = 1;
        while(!que.empty()){
            int p = que.front();
            que.pop();
            for(int i = 0 ; i < adj[p].size() ; i++){
                if(vis[adj[p][i]] == -1){
                    que.push(adj[p][i]);
                    vis[adj[p][i]] = vis[p]+1;
                }
                else{
                    vis[adj[p][i]] = min(vis[adj[p][i]],vis[p]+1);
                }
            }
        }
        return vis;
    }
};