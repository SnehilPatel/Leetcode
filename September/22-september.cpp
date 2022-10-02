// Question - https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
public:
    string reverseWords(string s) {
        int j=0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]==' ')
           {
               int k=i-1;
                while(j<k)
                {
                swap(s[j++],s[k--]);
                }
                j=i+1;
           } 
       }
      int p = s.size()-1;
      int m = j;
      while(m<p)
      {
          swap(s[m++],s[p--]);
      }
        return s;
        
    }
};

// Submission - https://leetcode.com/submissions/detail/805853981/ 