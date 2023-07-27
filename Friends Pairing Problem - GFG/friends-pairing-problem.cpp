//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    const int MOD = 1000000007;
    
    int countFriendsPairings(int N) {
        vector<int> dp(N + 1, 0);
        dp[0] = dp[1] = 1;
    
        for (int i = 2; i <= N; i++) {
            dp[i] = (dp[i - 1] + (i - 1) * 1LL * dp[i - 2]) % MOD;
        }
    
        return dp[N];
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
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 

// } Driver Code Ends