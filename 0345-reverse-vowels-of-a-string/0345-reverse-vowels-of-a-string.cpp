class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        map<char,int> mp;
        string abs = "aeiouAEIOU";
        for(auto i : abs){
            mp[i]++;
        }
        while(i<j){
           if(mp.find(s[i])!=mp.end() && mp.find(s[j])!=mp.end()) {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if (mp.find(s[i])==mp.end())
                i++;
            else if (mp.find(s[j])==mp.end())
                j--;
        }
        return s;
    }
};