//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n = arr2.size();
        int mer[2 * n];
        int i = 0, j = 0, k = 0;
        while (i < n && j < n) {
            if (arr1[i] <= arr2[j]) {
                mer[k++] = arr1[i++];
            }
            else {
                mer[k++] = arr2[j++];
            }
        }
        while (i < n) {
            mer[k++] = arr1[i++];
        }
        while (j < n) {
            mer[k++] = arr2[j++];
        }
        return mer[n] + mer[n - 1];
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends