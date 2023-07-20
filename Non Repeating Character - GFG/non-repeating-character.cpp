//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int arr[26] ={0};
       queue<char> q;
       q.push(S[0]);
       int n=S.size();
       arr[S[0]-'a']++;
       for(int i=1;i<n;i++)
       {
           arr[S[i]-'a']++;
           if(arr[S[i]-'a']==1)
           {
               q.push(S[i]);
           }
           while(!q.empty() && arr[q.front() -'a']!=1)
           {
               q.pop();
           }
       }
       if(q.empty())
       {
           return '$';
       }
       else
       {
       return q.front();
       }
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends