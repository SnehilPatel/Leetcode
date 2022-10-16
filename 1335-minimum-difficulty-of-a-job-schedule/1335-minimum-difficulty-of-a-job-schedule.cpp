class Solution {
public:
    int dp[301][11];
    int solve(int i, int n, int j, vector<int>&num){
        if(j < 0)
            return 1e9;
        if(i == n)
        {
            if(j != 0)
                return 1e9;
            return 0;
        }
        if(dp[i][j] != -1) 
            return dp[i][j];
        
        int maxi = INT_MIN;
        int res = INT_MAX;
        for(int curri = i; curri < n; curri++)
        {
            maxi = max(maxi, num[curri]);
            res = min(res, maxi+solve(curri+1, n, j-1, num));
        }
        return dp[i][j] = res;
    }
    int minDifficulty(vector<int>& nums, int d) {
        int n = nums.size();
        if(n < d)
            return -1;
        
        memset(dp, -1, sizeof(dp));
        int ans = solve(0, n, d, nums);
        
        // if(ans >= 1e9)
        //     return -1;
        return ans;        
    }
};
