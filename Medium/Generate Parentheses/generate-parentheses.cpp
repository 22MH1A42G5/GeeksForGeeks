//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void fun(int close,int open,string s,int n,vector<string> v){
        if(open+close >= 2*n){
            v.push_back(s);
            cout<<s<<endl;
            return;
        }
        if(close>open){
            return;
        }
        if(open==n){
            fun(close+1,open,s+')',n,v);
        }
        else{
            fun(close,open+1,s+'(',n,v);
            fun(close+1,open,s+')',n,v);
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> v;
        fun(0,1,"(",n,v);
        return v;
        // Your code goes here 
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends