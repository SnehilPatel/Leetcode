class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>>ans;
        vector<string>temp = strs;
        
        
       for(int i = 0; i < n; i++)
            sort(temp[i].begin(), temp[i].end());
        
        
        unordered_map<string, vector<string> >mp;
        for(int i = 0; i < n; i++)
            mp[temp[i]].push_back(strs[i]);    
        
        for(auto it = mp.begin(); it != mp.end(); it++)
            ans.push_back(it->second);
        return ans;
    }
};