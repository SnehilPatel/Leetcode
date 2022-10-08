// Question - https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int diff=INT_MAX;
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<diff){
                    diff=abs(target-sum);
                    ans=sum;
                }
                if(sum > target)
                    k--;
                else
                    j++;
            }
        }
        return ans;
    }
};


// Submission - https://leetcode.com/submissions/detail/817621262/ 