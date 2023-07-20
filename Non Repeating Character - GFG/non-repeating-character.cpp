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
       map<char,int> m;
       queue<char> q;
       int n=S.size();
       for(int i=0;i<n;i++)
       {
           m[S[i]]++;
           if(m[S[i]]==1)
           {
               q.push(S[i]);
           }
           while(!q.empty() && m[q.front()]!=1)
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