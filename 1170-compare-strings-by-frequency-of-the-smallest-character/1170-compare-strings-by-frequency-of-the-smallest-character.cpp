class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) { 
        vector<int>ans;
        vector<int>g;
        for(int i=0;i<queries.size();i++)
        {    map<char,int>v1;
            
            for(int j=0;j<queries[i].size();j++){  
               v1[queries[i][j]]++;
            }
            for(auto it:v1){
                 g.push_back(it.second);
                 break;
            }
        } 
        
        vector<int>h;
        for(int j=0;j<words.size();j++){
            map<char,int>v2;    
            for(int k=0;k<words[j].size();k++){   
                v2[words[j][k]]++;            
            }               
            for(auto it:v2){
                h.push_back(it.second);
                break;
            }                  
        }
        int cnt=0;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<h.size();j++){
                if(g[i]<h[j]){
                    cnt++;
                }
            }
            ans.push_back(cnt);
            cnt=0;
        }
        return ans;        
    }
};
        