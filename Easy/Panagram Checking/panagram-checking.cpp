//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
        bool checkPangram (string s) {
            // your code here
            // your code here
            int i;
            if(s.size()<26){
                //cout<<"False";
                return false;
            }
            remove(s.begin(),s.end(),' ');
            string st="abcdefghijklmnopqrstuvwxyz";
            string cs="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            for(int i=0;i<s.size();i++){
                auto p = st.find(s[i]);
                auto pc=cs.find(s[i]);
                //cout<<s[i];
                if(p!=string::npos){
                    int t=st.find(s[i]);
                    st[t]='1';
                    cs[t]='1';
                    //cout<<st[t]<<endl;
                    //cout<<t<<endl;
                    //cout<<t<<endl;
                }
                else if(pc!=string::npos){
                    int t=cs.find(s[i]);
                    //cout<<st<<" "<<cs<<" "<<t<<endl;
                    st[t]='1';
                    cs[t]='1';
                    //cout<<cs[t]<<endl;
                    //cout<<t<<endl;
                }
                //cout<<cs<<endl;
                //cout<<st<<" "<<cs<<endl;
            }
            //cout<<st<<" "<<cs<<endl;
            for(int i=0;i<st.size();i++){
                if(st[i]!='1'){
                    return false;
                }
            }
            return true;
        }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends