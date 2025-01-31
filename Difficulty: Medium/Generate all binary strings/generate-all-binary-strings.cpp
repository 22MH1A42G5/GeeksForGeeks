//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<string>final;
    void Noconsec(int n , int i , string ans,int cnt){
        if(cnt == 2){
            return;
        }
        if(i == n){
            final.push_back(ans);
            return;
        }
        ans.push_back('1');
        Noconsec( n , i+1  , ans , cnt + 1);
        ans.pop_back();
        ans.push_back('0');
        Noconsec( n , i+1 , ans , 0);
        return;
    }
    vector<string> generateBinaryStrings(int num){
        //Write your code
        int i = 0;
        string s = "";
        Noconsec(num , i , s , 0);
        sort(final.begin() , final.end());
        return final;
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends