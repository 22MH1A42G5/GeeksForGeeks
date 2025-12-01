class Solution {
  public:
    void dfs(int node , stack<int>&st , vector<int>&vis , vector<vector<int>>&edges){
        vis[node] = 1;
        for(auto tem : edges[node]){
            if(!vis[tem]){
                dfs(tem , st , vis , edges);
            }
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        stack<int>st;
        int n = edges.size();
        vector<int>vis(V , 0);
        vector<int>indeg(V,0);
        vector<vector<int>>adj(V);
        vector<int>ans;
        for(int i = 0 ; i < edges.size() ; i++){
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        for(int i = 0 ; i < adj.size() ; i++){
            for(int j = 0 ; j <adj[i].size() ; j++){
                indeg[adj[i][j]]++;
            }
        }
        queue<int>que;
        for(int i = 0 ; i < V ; i++){
            if(indeg[i] == 0){
                // vis[i] = 1;
                que.push(i);
            }
        }
        while(!que.empty()){
            int node = que.front();
            // vis[i] = 1;
            que.pop();
            ans.push_back(node);
            for(auto it : adj[node]){
                indeg[it]--;
                if(indeg[it] == 0){
                    que.push(it);
                }
                
            }
        }
        // for(int i = 0 ; i < V ; i++){
        //     if(!vis[i]){
        //         dfs(i , st , vis , edges);
        //     }
        // }
        // vector<int>ans;
        // while(!st.empty()){
        //     ans.push_back(st.top());
        //     st.pop();
        // }
        return ans;
    }
};