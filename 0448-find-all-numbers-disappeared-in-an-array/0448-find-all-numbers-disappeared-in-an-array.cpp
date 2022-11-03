class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) { 
        int n = nums.size();
        vector<int>res;
        unordered_map<int,int>temp;
        for(int i = 1; i <= n; i++)
            temp[i] = 0;
        for(auto &i : nums)
            temp[i]++;
        for(auto &i : temp) {
            if(i.second == 0)
                res.push_back(i.first);
        }
        return res;
    }
};