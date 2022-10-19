class Solution {
public:
    static bool comp(pair<string,int>&a,pair<string,int>&b){
         
        if(a.second==b.second)
            return a.first<b.first;
        return a.second>b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>u;
        vector<pair<string,int>>v;
        for(auto i:words)
            u[i]++;
        for(auto i:u)
            v.push_back({i.first,i.second});
        sort(v.begin(),v.end(),comp);
        vector<string>ans;
        for(int i=0;i<k;i++)
            ans.push_back(v[i].first);
        return ans;
    }
};