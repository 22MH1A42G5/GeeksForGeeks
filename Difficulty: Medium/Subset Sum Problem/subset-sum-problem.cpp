class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        vector<vector<bool>>dp(n , vector<bool>(sum+1 , false));
        dp[0][0] = true;
        if(arr[0] <= sum){
            dp[0][arr[0]] = true;
        }
        for(int i = 1 ; i < n ; i++){
            for(int j = 0; j <= sum ; j++){
                if(arr[i] <= j){
                    dp[i][j] = (dp[i-1][j] | dp[i-1][j - arr[i]]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n-1][sum];
    }
};