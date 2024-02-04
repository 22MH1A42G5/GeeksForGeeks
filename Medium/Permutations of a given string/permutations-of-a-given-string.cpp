//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
    void Perms(string s,int start,int end,vector<string>&ans){
        if(start>=end){
            ans.push_back(s);
            return;
        }
        for(int i=start;i<=end;i++){
            swap(s[start],s[i]);
            Perms(s,start+1,end,ans);
            swap(s[start],s[i]);
        }
    }
	vector<string> find_permutation(string s)
	{
	    vector<string>ans;
        Perms(s,0,s.size()-1,ans);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
	}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends