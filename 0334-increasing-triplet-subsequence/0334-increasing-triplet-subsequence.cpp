class Solution {
public:
   bool increasingTriplet(vector<int>& nums) {
        if (nums.size() < 3) {
            return 0;
        }
        int low = INT_MAX, mid = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > mid) {
                return 1;
            }
            if (nums[i] < low) {
                low = nums[i];
            } else if (nums[i] > low && nums[i] < mid) {
                mid = nums[i];
            }
        }
        return 0;
    }
};