// Question  4th august - https://leetcode.com/problems/mirror-reflection/

class Solution {
public:
    int mirrorReflection(int p, int q) {
        while((p%2==0) && (q%2==0)){
            p/=2;
            q/=2;
        }
        if((p%2)==0 && (q%2)!=0) 
            return 2;
        if((p%2)!=0 && (q%2)!=0) 
            return 1;
        return 0;
    }
};

// Submission - https://leetcode.com/submissions/detail/764876517/

// Question 5th August - https://leetcode.com/problems/combination-sum-iv/

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target + 1, 0);
        dp[0] = 1;
        for (int i = 1; i < dp.size(); i++) {
          for (int j = 0; j < nums.size(); j++) {
            if (nums[j] <= i)
              dp[i] += dp[i - nums[j]];
          }
        }

        return dp[target];
    }
};

// Submission - https://leetcode.com/submissions/detail/765767144/
