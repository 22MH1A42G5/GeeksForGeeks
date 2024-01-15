//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        vector<int>r;
        vector<int>l;
        long max=0,j=0,sol=0;
        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
                r.push_back(max);
            }
            else{
                r.push_back(max);
            }
        }
        max=0;
        for(int i=n-1;i>=0;i--){
            if(max<arr[i]){
                max=arr[i];
                l.push_back(max);
            }
            else{
                l.push_back(max);
            }
        }
        reverse(l.begin(),l.end());
        for(int i=0;i<n;i++){
            sol+=min(r[i],l[i])-arr[i];
        }
        return sol;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends