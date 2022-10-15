//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s)
    {
        string ans="";
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=']')
            st.push(s[i]);
            else
            {
                string temp="";
                string num="";
                while(st.empty()!=true && st.top()!='[')
                {
                    temp=st.top()+temp;
                    st.pop();
                }
                st.pop();
                while(st.empty()!=true && isdigit(st.top()))
                {
                    num=st.top()+num;
                    st.pop();
                }
                int k=stoi(num);
                while(k--)
                {
                    for(int p=0;p<temp.length();p++)
                    {
                        st.push(temp[p]);
                    }
                }
            }
        }
        while(st.empty()!=true)
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends