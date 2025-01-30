//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  long long int mod = 1000000007;
    long long int fun(int n , vector<long long int>&dp){
        if(n <= 1){
            return dp[n];
        }
        if(dp[n] != -1)
        return dp[n];
        return dp[n] = ((fun(n-1 , dp)%mod) + (fun(n-2 , dp)%mod))%mod;
        
        // cout<<dp[n]<<" ";
    }
    long long int topDown(int n) {
        vector<long long int>dp(10001 , -1);
        dp[0] = 0;
        dp[1] = 1;
        return fun( n , dp);
    }
    long long int bottomUp(int n) {
        vector<long long int>dp1(10001 , n);
        dp1[0] = 0;
        dp1[1] = 1;
        for(long long i = 2 ; i <= n ; i++){
            dp1[i] = ((dp1[i-1]%mod) + (dp1[i-2]%mod))%mod;
            // cout<<dp1[i]<<" ";
        }
        return dp1[n];
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends