class Solution {
public:
    string minWindow(string s, string t) {
        string ans="";
        int i=0,j=0,n=s.size(),minSize=INT_MAX,count=0;
        unordered_map<char,int> mp;
        for(int i=0;i<t.size();i++){
            if(mp.count(t[i])>0){
                mp[t[i]]++;
            }else{
                mp[t[i]]=1;
            }
        }
        count=mp.size();
        while(j<n){
            if(mp.count(s[j])>0){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count--;
                }
            }
            while(!count){
                if(minSize>j-i+1){
                    minSize=j-i+1;
                    ans=s.substr(i,j-i+1);
                }
                if(mp.count(s[i])>0){
                    if(mp[s[i]]==0){
                        count++;
                    }
                    mp[s[i]]++;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};