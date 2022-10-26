class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
        int curr = nums[0];
        
        for(int i = 1;i<nums.size();i++)
        {
            curr = curr^nums[i]; 
        }
        
        return(curr);
    }
};