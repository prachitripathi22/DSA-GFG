//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    int n=A.size();
		    string s ="";
		    s+=A[0];
		    queue<char> q;
		    q.push(A[0]);
		    int arr[26 ] ={0};
		    arr[A[0]-'a']++;
		    for(int i=1;i<n;i++)
		    {
		        arr[A[i]-'a']++;
		        if(arr[A[i]-'a']==1) q.push(A[i]);
		        
		        while(!q.empty() && arr[q.front()-'a']!=1)
		        {
		            q.pop();
		        }
		        if(q.empty())
		        {
		            s+='#';
		        }
		        else
		        {
		            s+=q.front();
		        }
		    }
		    return s;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends