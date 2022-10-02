// Question - https://leetcode.com/problems/push-dominoes/

class Solution {
public:
    string pushDominoes(string s) {
        if(s.size() == 1)
            return s;
        string res = "";
        while(true){
            string ans = "";
            for(int i = 0; i < s.size(); i++){
                if(i == 0){
                    if(s[i] == '.' && s[i + 1] == 'L') 
                        ans += s[i + 1];
                    else
                        ans += s[i];
                }
                else if(i == s.size() - 1){
                    if(s[i] == '.' && s[i - 1] == 'R') 
                        ans += s[i - 1];
                    else 
                        ans += s[i];
                }
                else{
                    if(s[i] == '.' && s[i - 1] == 'R' && s[i + 1] != 'L')
                        ans += s[i - 1];
                    else if(s[i] == '.' && s[i + 1] == 'L' && s[i - 1] != 'R')
                        ans += s[i + 1];
                    else
                        ans += s[i];
                }
            
            }
            s = ans;
            if(s == res)
                break;
            else 
                res = s; 
        
            //cout<<ans<<endl;
            
        }
        return res;
    }
};

// Submission - https://leetcode.com/submissions/detail/809575815/