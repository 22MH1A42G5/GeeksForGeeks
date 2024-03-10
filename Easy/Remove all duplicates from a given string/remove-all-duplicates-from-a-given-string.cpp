//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    int v[52];
	    for(int i = 0 ; i < 52 ; i++){
	        v[i]=0;
	    }
	    for(int i = 0 ; i < str.size() ; i++){
	        int cht = str[i];
	        //cout<<str[i]<<" "<<cht<<endl;
	        if(cht >= 'a' && cht<='z'){
	            v[cht-'a']++;
	        }
	        else{
	            v[26+cht-'A']++;
	            //cout<<26+cht-'A'<<" "<<str[i]<<endl;
	        }
	        //cout<<cht<<" ";
	    }
	    //cout<<v[28]<<endl;
	    string s="";
	    for(int i = 0 ; i < str.size() ; i++){
	        int cht = str[i];
	         if(cht >= 'a' && cht<='z'){
	            if(v[cht-'a']>0){
	                s+=str[i];
	                v[cht-'a']=0;
	            }
	        }
	        else{
	            //v[26+cht-'A']++;
	            if(v[26+cht-'A'] > 0){
	                s+=str[i];
	                v[26+cht-'A']=0;
	                //cout<<v[28]<<endl;
	            }
	            //cout<<26+cht-'A'<<" "<<str[i]<<endl;
	        }
	    }
	    //cout<<s;
	    //cout<<int('A')<<endl;
	    //cout<<int('Z')<<endl;
	    return s;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends