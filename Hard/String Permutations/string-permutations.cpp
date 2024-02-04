//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
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
    
    vector<string> permutation(string s)
    {
        //Your code here
        vector<string>ans;
        Perms(s,0,s.size()-1,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends