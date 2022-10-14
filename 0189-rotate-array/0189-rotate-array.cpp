class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        int n=nums.size();
        k=k%n;
        int last=n-1;
        int count1=last-k+1;
        int count=last-k+1;
        while(k>=1){
            ans.push_back(nums[count]);
            k--;
            count++;
        }
        int n1=nums.size()-ans.size();
        if(n1!=0){
            for(int i=0; i<n1; i++){
                ans.push_back(nums[i]);
            }
        }
        for(int j=0; j<n; j++){
            nums[j]=ans[j];
        }
        
    }
};