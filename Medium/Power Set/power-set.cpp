//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void PowerSet(string s , vector<string> &st ,int index ,string str){
	        if(index > s.size()-1 ){
	            if(str=="")
	            return;
	            st.push_back(str);
	            return;
	        }
	        PowerSet(s , st , index+1 , str+s[index]);
	        PowerSet(s , st , index+1 , str);
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>st;
		    int index = 0;
		    PowerSet(s , st , index , "" );
		    sort(st.begin() , st.end());
		    return st;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends