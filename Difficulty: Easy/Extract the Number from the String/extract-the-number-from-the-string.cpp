//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sen) {
        long long maxi = 0,tem;
        for(long long i = 0 ; i < sen.size() ; i++){
            if(sen[i]>='0' && sen[i]<= '9'){
                string st="";
                tem = 0;
                while(i < sen.size() && sen[i]>='0' && sen[i]<='9'){
                    if(sen[i]=='9'){
                        tem = 1;
                    }
                    // cout<<sen[i]<<" ";
                    st+=sen[i];
                    i++;
                }
                // cout<<st<<" ";
                if(tem != 1){
                   stringstream geek;
                    geek << st;
                    long long te = 0;
                    geek >> te;
                    // cout<<te<<" ";
                    if(maxi < te){
                        maxi = te;
                    }
                }
                
            }
            // cout<<sen[i]<<" ";
        }
        if(maxi != 0)
        return maxi;
        return -1;
        // code here
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends