//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& mat) {
    // Your code goes here
    int j = 0;
    vector<vector<int>>ans;
    vector<int>tem;
    for(int i = 0 ; i < mat.size();i++){
        int j = mat.size()-1;
        while(j!=-1){
            tem.push_back(mat[j][i]);
            j--;
        }
        ans.push_back(tem);
        tem.clear();
    }
    for(int i = 0 ; i < mat.size() ; i++){
        for(int j = 0 ; j < mat.size() ; j++){
            mat[i][j]=ans[i][j];
        }
    }
}


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > matrix(n);
        for (int i = 0; i < n; i++) {
            matrix[i].resize(n);
            for (int j = 0; j < n; j++)
                cin >> matrix[i][j];
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends