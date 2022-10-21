class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
       unordered_map<int,int> result;
        for(int i=0;i<nums.size();i++)
        {
            if(result.find(nums[i])!=result.end())
            {
                if(abs(result[nums[i]]-i)<=k)
                {
                    return true;
                }
            }
            result[nums[i]]=i;
        }
        return false;
        
    }
};