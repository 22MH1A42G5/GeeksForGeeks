//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string curse(string s,int k){
        //return s;
        int i=0,j=1,flag=0;
        while(j<s.size()){
            //cout<<j<<endl<<i<<endl<<k<<endl<<s<<endl;
            if(s[i]!=s[j]){
                i=j;
                j++;
            }
            else if(s[i]==s[j]){
                j++;
            }
            //cout<<j<<endl<<i<<endl<<k<<endl<<s<<endl;
            if(j-i==k){
                flag=1;
                for(int l=i;l<j;l++){
                    s[l]='1';
                }
                i=j;
                j++;
            }
        }
        //cout<<s<<endl;
        if(flag==0){
            return s;
        }
        s.erase(remove(s.begin(), s.end(), '1'), s.end());
        //cout<<s<<endl;
        
        //cout<<s<<endl;
        //return s;
        return curse(s,k);
    }
    string Reduced_String(int k,string s){
        // Your code goes here
        if(k==1){
            return "";
        }
        return curse(s,k);
        //return "";
        
        
    }


};

//{ Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}
// } Driver Code Ends