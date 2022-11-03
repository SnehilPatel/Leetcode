class Solution {
public:
    vector<string> findRelativeRanks(vector<int> &score) {
        vector<string> res;
        vector<int> ans=score;
        sort(ans.begin(),ans.end(),greater<int>());
        unordered_map<int,int> mp;
        for(int i=0;i<ans.size();i++){
            mp[ans[i]]=i;
        }
      
        for(int i=0;i<score.size();i++){
            if(mp[score[i]]==0)
                res.push_back("Gold Medal");
            else if(mp[score[i]]==1)
                res.push_back("Silver Medal");
            else if(mp[score[i]]==2)
                res.push_back("Bronze Medal");
            else
                res.push_back(to_string(mp[score[i]]+1));
    
        }
        return res;
    }
};