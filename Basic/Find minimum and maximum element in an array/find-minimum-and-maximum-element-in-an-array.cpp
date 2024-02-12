//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        // code here
        pair<long long,long long>ans;
        long long mi=a[0],ma=0;
        for(int i=0;i<n;i++){
            if(ma<a[i]){
                ma=a[i];
            }
            if(mi>a[i]){
                mi=a[i];
            }
        }
        ans.first=mi;
        ans.second=ma;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends