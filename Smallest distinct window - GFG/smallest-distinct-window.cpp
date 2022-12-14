//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //int MAX_CHARS=256;
    int findSubString(string str)
    {
       int n=str.size();
       if(n<=1){
           return str.size();
       }
       int dist=0;
       bool vis[256]={false};
       for(int i=0; i<n; i++){
           if(vis[str[i]]==false){
               vis[str[i]]=true;
               dist++;
           }
       }
       
       int start=0, ans=INT_MAX, si=-1;
       int count =0;
       int cur[256]={0};
       for(int j=0; j<n; j++){
           cur[str[j]]++;
           if(cur[str[j]]==1){
               count++;
           }
           if(count == dist){
               while(cur[str[start]]>1){
                   if(cur[str[start]]>1){
                       cur[str[start]]--;
                   }
                   start++;
               }
           
               int window=j-start+1;
               if(ans>window){
                   ans=window;
                   si=start;
               }
               
           }
       }
       return ans;
        // Your code goes here   
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends