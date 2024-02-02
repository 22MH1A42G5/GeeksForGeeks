//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int flag=0;
        if(s[0]=='-'){
            flag=1;
        }
        if(flag==1){
            for(int i=1;i<s.length();i++){
                int ch=int(s[i]);
                if ((s[i] >= '0' && s[i] <= '9')) {
                    continue;
                }
                else{
                    return -1;
                }
            }
        }
        else{
        for(int i=0;i<s.length();i++){
            int ch=int(s[i]);
            if ((s[i] >= '0' && s[i] <= '9')) {
                continue;
            }
            else{
                return -1;
            }
        }
        }
        string st="";
        if(flag==1){
            for(int i=1;i<s.size();i++){
                st+=s[i];
            }
        }
        if(flag==0){
            return stoi(s);
        }
        else{
            //cout<<flag<<endl;
            int ans=stoi(st);
            //cout<<ans<<"1"<<endl;
            return ans*-1;
        }
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends