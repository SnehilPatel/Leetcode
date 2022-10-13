// Question - https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);
        dp[0]=1;
        int ans=1;
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(nums[j]<nums[i] && dp[i]<dp[j]){
                    dp[i]=dp[j];
                }
            }
           dp[i]++;
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};

// Submission - https://leetcode.com/submissions/detail/768367554/


// Question - https://leetcode.com/problems/binary-trees-with-factors/

class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        int n=arr.size();
        unordered_map<long long,long long>m;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++)
            m[arr[i]]=1;
        
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                int val=arr[i]/arr[j];
                if(val*arr[j]==arr[i] && m.count(val)){
                    m[arr[i]]=m[arr[i]]+(m[val]*m[arr[j]]);
                    
                }
            }
        }
        
        int sum=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++)
            sum=(sum+m[arr[i]])%mod;
        return sum;
    }
};


// Submission - https://leetcode.com/submissions/detail/769125735/
