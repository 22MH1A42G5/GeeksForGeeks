//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        string t = s,temp="";
        while(r--){
            int i=0;
            while(true){
                if(s.size()<=temp.size()){
                    break;
                }
                if(t[i]=='1'){
                    temp+="10";
                }
                else{
                    temp+="01";
                }
                i++;
            }
            if(r!=0){
                t = temp;
                temp="";
            }
        }
        //cout<<temp[n];
        return temp[n];
        cout<<temp<<endl;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends