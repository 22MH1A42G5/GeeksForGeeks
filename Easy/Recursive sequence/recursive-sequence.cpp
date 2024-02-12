//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void Sequence(long long int n,long long int &s,long long int t,long long int i){
        
        long long int p=1;
        long long int te=t;
        while(te--){
            p*=i;
            p=p%1000000007;
            i++;
            //cout<<i<<" "<<p<<endl;
        }
        s+=p;
        s=s%1000000007;
        //cout<<s<<endl;
        if(t>=n) return;
        //cout<<t;
        Sequence( n , s ,t+1 , i );
    }
    long long sequence(int n){
        // code here
        long long int s=0,i=1;
        long long int t=1;
        Sequence(n,s,t,i);
        s=s%1000000007;
        return s;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends