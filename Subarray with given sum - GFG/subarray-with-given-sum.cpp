//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int> v;
        int currentSum = arr[0], start = 0, i;
 
    /* Add elements one by one to currentSum and
    if the currentSum exceeds the sum,
    then remove starting element */
    for (i = 1; i <= n; i++) {
        // If currentSum exceeds the sum,
        // then remove the starting elements
        while (currentSum > s && start < i - 1) {
            currentSum = currentSum - arr[start];
            start++;
        }
 
        // If currentSum becomes equal to sum,
        // then return true
        if (currentSum == s) {
            v.push_back(start+1);
            v.push_back(i);
            return v;
        }
 
        // Add this element to currentSum
        if (i < n)
       
            currentSum = currentSum + arr[i];
    }
    v.push_back(-1);
    return v;
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