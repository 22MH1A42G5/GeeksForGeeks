//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        map<int,int>mpp;
        long long a , b;
        long long s = 0;
        for(int i  = 0 ; i < arr.size() ; i++){
            s += arr[i];
            mpp[arr[i]]++;
            if(mpp[arr[i]]==2){
                a = arr[i];
            }
        }
        long long n = arr.size();
        long long sn = ((n)*(n+1))/2;
        s -= a;
        int a1 = a;
        int ans = sn-s;
        return {a1,ans};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends