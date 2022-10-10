// Question - https://leetcode.com/problems/break-a-palindrome/

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();
        if(n == 1)
            return "";
        for(int i=0; i<n/2; i++){
            if(palindrome[i] != 'a'){
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome[n - 1] = 'b';  
        return palindrome;
    }
};



// Submission - https://leetcode.com/submissions/detail/819163935/