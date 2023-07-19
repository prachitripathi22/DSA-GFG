//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string A) {
        //code here
       string  a= A;
        reverse(a.begin(),a.end());
        int n = A.size();
        vector<int> curr(n+1,0);
        vector<int> next(n+1,0);

        for(int i =1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(A[i-1] == a[j-1])
                {
                    curr[j] = 1+ next[j-1];
                }
                else
                {
                    curr[j] = max(next[j],curr[j-1]);
                }
            }
            next = curr;
        }

        return next[n];
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends