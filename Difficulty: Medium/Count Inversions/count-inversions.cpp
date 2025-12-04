class Solution {
  public:
    // int ans = 0;
    // 2 4 5 8 10   // 1 3 6 9
    void Merge(vector<int>&arr , int low , int mid , int high,int& ans){
        int n1 = mid - low + 1 , n2 = high - mid;
        vector<int>v1(n1) , v2(n2);
        for(int i = 0 ; i < n1 ; i++){
            v1[i] = arr[i+low];
        }
        for(int i = 0 ; i < n2 ; i++){
            v2[i] = arr[mid + 1 + i];
        }
        int i = 0 , j = 0 , k = 0;
        vector<int>fin(n1+n2);
        while(i < n1 && j < n2){
            if(v1[i] > v2[j]){
                ans += n1 - i;
                fin[k++] = v2[j++];
            }
            else{
                fin[k++] = v1[i++];
            }
        }
        while(i < n1){
            fin[k++] = v1[i++];
        }
        while(j < n2){
            fin[k++] = v2[j++];
        }
        for(int i = low ; i <= high ; i++){
            arr[i] = fin[i-low];
        }
        
    }
    void MergeSort(vector<int>& arr , int low , int high , int& ans){
        if(low >= high) return;
        int mid = (low + high) / 2;
        MergeSort(arr , low , mid , ans);
        MergeSort(arr , mid + 1 , high , ans);
        Merge(arr , low , mid , high , ans);
        
    }
    int inversionCount(vector<int> &arr) {
        // Code Here
        int ans = 0;
        MergeSort(arr , 0 , arr.size()-1 , ans);
        return ans;
    }
};