// Question - https://leetcode.com/problems/time-based-key-value-store/

class TimeMap {
public:
    unordered_map<string,map<int,string>>m;
    TimeMap() {
        m={};
    }
    
    void set(string key, string value, int timestamp) {
        m[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
        string s="";
        auto it=m[key].upper_bound(timestamp);
        if(it==m[key].begin())
            return s;  
        it--;
        return it->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */

// Submission - https://leetcode.com/submissions/detail/816267737/