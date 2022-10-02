// Question - https://leetcode.com/problems/sum-of-even-numbers-after-queries/

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                sum += nums[i];
            }
        }
        vector<int> res;
        for (int i = 0; i < queries.size(); i++) {
            int q = queries[i][0];
            int ind = queries[i][1];
            if (nums[ind] % 2 == 0) {
                sum -= nums[ind];
            }
            nums[ind] += q;
            if (nums[ind] % 2 == 0) {
                sum += nums[ind];
            }
            res.push_back(sum);
        }
        return res;
    }
};

// Submission - https://leetcode.com/submissions/detail/805220663/