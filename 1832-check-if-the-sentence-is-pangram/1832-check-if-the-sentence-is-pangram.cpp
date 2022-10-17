class Solution {
public:
    bool checkIfPangram(string sentence) {
       vector<char> f(26);
        for(int i=0; i<sentence.size(); i++){
            f[sentence[i]-'a']++;
        }
        for(int i=0; i< f.size(); i++){
            if(f[i]==0){
                return false;
            }
        }
        return true;
    }
};
