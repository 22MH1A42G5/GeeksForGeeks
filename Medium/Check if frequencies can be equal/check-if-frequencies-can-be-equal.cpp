//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    vector<int>v(26,0);
	    for(int i = 0 ; i < s.size() ; i++ ){
	        int t = s[i];
	        v[t-97]++;
	        //cout<<t<<" ";
	    }
	    //cout<<endl;
	    int max=0;
	    int ind =0;
	    for(int i = 0 ; i < v.size() ; i++){
	        //cout<<v[i]<<" ";
	        if(max < v[i]){
    	        max = v[i];
    	        ind = i;
	        }
	    }
	    int fl= 0 ,cnt=0;
	    //cout<<endl;
	    //cout<<max<<endl;
	    for(int i = 0 ; i < v.size() ; i++){
	        if(v[i]==0){
	            continue;
	        }
	        else if(v[i] != max){
	            fl=1;
	        }
	        if(v[i]==1){
	            cnt++;
	        }
	    }
	    if(fl == 0)
	    return true;
	    //cout<<endl;
	    if(cnt==1){
	        for(int i = 0 ; i < v.size() ; i++){
	            if(v[i]==1 || v[i]==0){
	                continue;
	            }
	            if(v[i] != max){
	                return false;
	            }
	            
	        }
	    }
	    else{
    	    //cout<<max;
    	    v[ind]--;
    	    for(int i = 0 ; i < v.size() ; i++){
    	        if(v[i] == 0 ){
    	            continue;
    	        }
    	        else if(v[i] != max-1 and cnt != 1){
    	            return false;
    	        }
    	    }
	    }
	    return true;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends