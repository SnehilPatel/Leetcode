class Solution {
public:
    int max(int a, int b) {
        if(a < b) {
            return b;
        }
        return a;
    }
    int ans = 0;
    void backtrack(vector<string>& arr, int i, string curr) {
        vector<int> count(26,0);
        for(int j = 0; j < curr.size(); j++) {
            if(count[curr[j]-'a'] >= 1) {
                return;
            }
            count[curr[j]-'a']++;
        }
        if(i >= arr.size()) {
            ans = max(ans, curr.size());
            return;
        }
        backtrack(arr, i+1, curr);
        backtrack(arr, i+1, curr+arr[i]);
    }
    
    int maxLength(vector<string>& arr) {
        string curr;
        backtrack(arr, 0, curr);
        return ans;
    }
    
};