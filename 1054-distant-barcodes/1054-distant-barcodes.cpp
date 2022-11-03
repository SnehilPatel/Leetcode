class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        if(barcodes.size() == 1)
            return barcodes;
        unordered_map<int, int> m;
        for(auto x : barcodes){
            m[x]++;
        }
        
        priority_queue<pair<int, int>> pq;
        for(auto x : m){
            pq.push({x.second, x.first});
        }
        
        vector<int> ans;
        while(!pq.empty()){
            vector<pair<int, int>> t;
            for(int i = 0; i < 2; i++){
                if(!pq.empty()){
                    t.push_back(pq.top());
                    pq.pop();
                }
            }
            for(auto x : t){
                if(x.first != 0){
                    ans.push_back(x.second);
                    x.first = x.first - 1;
                    pq.push(x);
                }
            }
        }
        return ans;
    }
};