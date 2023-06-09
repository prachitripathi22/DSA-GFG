//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    void generateUniquePermutations(std::string str, int left, int right, std::set<std::string>& uniquePermutations) {
    if (left == right) {
        uniquePermutations.insert(str);
        return;
    }

    for (int i = left; i <= right; i++) {
        std::swap(str[left], str[i]);
        generateUniquePermutations(str, left + 1, right, uniquePermutations);
        std::swap(str[left], str[i]); // Backtracking
    }
}
    
	public:
		vector<string>find_permutation(string S)
		{
		    std::set<std::string> uniquePermutations;
            generateUniquePermutations(S, 0, S.length() - 1, uniquePermutations);
            return std::vector<std::string>(uniquePermutations.begin(), uniquePermutations.end());

		}
    

};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends