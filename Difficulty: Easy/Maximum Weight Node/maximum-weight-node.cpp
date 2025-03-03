//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int maxWeightCell(vector<int> &ex) {
        // code here
        int n = ex.size();
        vector<vector<int>>adjList(n);
        for(int i = 0 ; i < ex.size() ; i++){
            if(ex[i] != -1)
            adjList[ex[i]].push_back(i);
        }
        int maxi = INT_MIN;
        int ans ;
        for(int i = 0 ; i < adjList.size() ;i++){
            int s = 0 ;
            for(int j = 0 ; j < adjList[i].size() ; j++){
                s += adjList[i][j];
            }
            if(maxi <= s){
                maxi = s;
                ans = i;
            }
        }
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    string str;
    getline(cin, str);
    int tc = stoi(str);
    while (tc--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> exits;
        int num;
        while (ss >> num) {
            exits.push_back(num);
        }
        Solution sln;
        cout << sln.maxWeightCell(exits) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends