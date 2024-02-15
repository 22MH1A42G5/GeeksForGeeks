//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>v, int n, long long k)
    {
        // Your code here
        if(k==0){
            for(int i=0;i<v.size();i++){
                if(v[i]==0){
                    return {i+1 , i+1 };
                }
            }
            return {-1};
        }
        int i=0,j=0;
        int s=v[0];
        while(j<v.size()){
            while(i<=j && s>k){
                s-=v[i];
                i++;
            }
            if(s==k){
                return {i+1,j+1};
            }
            j++;
            if(j<v.size())
            s+=v[j];
        }
        return {-1};
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
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends