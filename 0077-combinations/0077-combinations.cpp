class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<vector<int>> output;
        ans.push_back({});
        for (int i = 0; i < n; i++) {
            int size = ans.size();
            for (int j = 0; j < size; j++) {
                vector<int> temp = ans[j];
                temp.push_back(i + 1);
                ans.push_back(temp);
            }
        }
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i].size() == k) {
                output.push_back(ans[i]);
            }
        }
        return output;
    }
};