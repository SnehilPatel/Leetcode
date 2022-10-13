// Question 6th August - https://leetcode.com/problems/poor-pigs/ 

class Solution {
public:
    int poorPigs(int buckets, int poisonTime, int totalTime) {
        return ceil(log(buckets) / log(totalTime / poisonTime + 1));
    }
};

// Submission - https://leetcode.com/submissions/detail/766564970/

// Question 6th August - https://leetcode.com/problems/count-vowels-permutation/

class Solution {
public:
    int countVowelPermutation(int n) {
        int mod = 1000000007;
        long long dp[n+1][6];
        memset(dp, -1, sizeof(dp));
        for(int i=1; i<=5; ++i) dp[1][i] = 1;
        for(int i=2; i<=n; ++i) {
            dp[i][1] = dp[i-1][2] % mod;
            dp[i][2] = (dp[i-1][1] + dp[i-1][3]) % mod;
            dp[i][3] = (dp[i-1][1] + dp[i-1][2] + dp[i-1][4] + dp[i-1][5]) % mod;
            dp[i][4] = (dp[i-1][3] + dp[i-1][5]) % mod;
            dp[i][5] = dp[i-1][1] % mod;
        }  
        return (dp[n][1] + dp[n][2] + dp[n][3] + dp[n][4] + dp[n][5]) % mod;
    }
};

// Submission - https://leetcode.com/submissions/detail/767315171/ 

