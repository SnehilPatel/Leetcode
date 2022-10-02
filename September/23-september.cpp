// Question - https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/

class Solution {
public:
    int concatenatedBinary(int n) {
        long ans = 0;
        long length = 0;
        for (int i = 1; i <= n; ++i) {
            
            if ((i & (i - 1)) == 0){
                length++;
            } 
            ans = ((ans << length) | i) % 1000000007;
        }
        return ans;
    }
};


// Submission - https://leetcode.com/submissions/detail/806697061/ 