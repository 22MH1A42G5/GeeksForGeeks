//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        long long ans = 0;
        if(n*2 < q){
            return 0;
        }
        if(q < n+1){
            long long tem = (n+1) - q;
            return n-tem;
        }
        else if (q > n+1){
            long long tem = q - (n+1);
            return n - tem;
        }
        else if(q == n+1){
            return n;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        
        cin>>n>>q;

        Solution ob;
        cout << ob.sumMatrix(n,q) << endl;
    }
    return 0;
}
// } Driver Code Ends