class Solution {
public:
    int reverse(int n){
        int val = 0;
        while (n){
            val = val *10 + (n % 10);
            n /= 10;
        }
        return val;
    }

    int countDistinctIntegers(vector<int> &nums) {
        unordered_set<int> st;
        for (int i: nums){
            string j=to_string(i);
            std::reverse(j.begin(),j.end());
            int k=stoi(j);
            st.insert(i);
            st.insert(k);
        }
        return st.size();
    }
};