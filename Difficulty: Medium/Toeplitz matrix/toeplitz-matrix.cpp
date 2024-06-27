//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool isToeplitz(vector<vector<int>> &mat);

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }

        bool b = isToeplitz(a);

        if (b == true)
            cout << "true";
        else
            cout << "false";

        cout << endl;
    }
    return 0;
}
// } Driver Code Ends



bool isToeplitz(vector<vector<int>>& mat) {
    // code here
    int j = 0;
    while(j < mat[0].size()){
        int te = mat[0][j];
        int i = 0;
        int j1 = j;
        while(i < mat.size() && j1 < mat[0].size()){
            if(te != mat[i][j1]){
                return false;
            }
            i++;
            j1++;
        }
        j++;
    }
    int i=0;
    while(i < mat.size()){
        int te = mat[i][0];
        int j = 0;
        int i1 = i;
        while(i1 < mat.size() && j < mat[0].size()){
            if(te != mat[i1][j]){
                return false;
            }
            i1++;
            j++;
        }
        i++;
    }
    return true;
}