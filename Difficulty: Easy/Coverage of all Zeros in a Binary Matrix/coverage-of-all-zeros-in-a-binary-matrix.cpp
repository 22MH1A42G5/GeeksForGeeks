//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& mat) {
        // Code here
        int ans = 0;
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat[0].size()-1 ; j++){
                if(mat[i][j]^mat[i][j+1]){
                    ans++;
                }
            }
        }
        for(int i = 0 ; i < mat[0].size() ; i++){
            for(int j = 0 ; j < mat.size()-1 ; j++){
                if(mat[j][i]^mat[j+1][i])
                ans++;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends