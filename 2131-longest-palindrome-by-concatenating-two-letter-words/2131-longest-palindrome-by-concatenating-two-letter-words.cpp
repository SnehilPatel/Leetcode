class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> mp;
        int ans=0, count=0;
        for(int i=0; i<words.size(); ++i) {
                string s=words[i];
                swap(s[0], s[1]);
                if(words[i]==s) {
                    count=mp.count(s) ? count-1:count+1;
                }
                if(mp.count(s)) {
                    ans+=4;
                    if(mp[s]>1) mp[s]--;
                    else mp.erase(s);
                }
                else mp[words[i]]++;
        }
     return (count>0) ? ans+2:ans;
    }
};