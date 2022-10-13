// Question - https://leetcode.com/problems/my-calendar-i/

class MyCalendar
{
public:
    map<int, int> mp;
    MyCalendar()
    {
        
    }

    bool book(int start, int end)
    {
        
        auto i = mp.upper_bound(start);
        if (i == mp.end() || i->second >= end)
        {
            mp[end] = start;
            return true;
        }
        else
            return false;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */

// Submission - https://leetcode.com/submissions/detail/763986470/
