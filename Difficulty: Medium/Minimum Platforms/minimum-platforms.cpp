//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        vector<int>shed(2360 , 0) , pref(2360 );
        for(int i = 0 ; i < dep.size() ; i++){
            shed[arr[i]]++;
            shed[dep[i] + 1]--;
        }
        int ans = 0;
        pref[0] = shed[0];
        for(int i = 1 ; i < shed.size() ; i++){
            pref[i] = pref[i-1] + shed[i];
        }
        for(int i = 0 ; i < shed.size() ; i++){
            ans = max(pref[i] , ans);
        }
        // for(int i = 900 ; i < shed.size() ; i++){
        //     cout << shed[i]<< " ";
        // }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, dep;
        string input;

        // Read first array (arr)
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Read second array (dep)
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            dep.push_back(number);
        }

        // Assuming Solution class is defined elsewhere with a method findPlatform
        Solution ob;
        cout << ob.findPlatform(arr, dep);

        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends