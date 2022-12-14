// Ques - https://leetcode.com/problems/my-calendar-iii/

class MyCalendarThree {
public:
    map<int,int> mp;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        int temp = 0;
        int result = 0;
        mp[start]++;         
        mp[end]--;           
        for(auto m : mp){
            temp += m.second;               
            result = max(result, temp);
        }
        return result;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */

// Submission - https://leetcode.com/submissions/detail/817009539/