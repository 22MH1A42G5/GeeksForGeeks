//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string text)
        {
            //code here.
            vector<int> v;
            //int j=text.size()-1;
            int i = 0 ;
            while(i + pat.size()-1 < text.size() ){
                //cout<<text.substr(i,pat.size())<<endl;
                if(pat == text.substr(i,pat.size())){
                    v.push_back(i+1);
                    //cout<<"HI";
                }
                i++;
            }
            return v;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends