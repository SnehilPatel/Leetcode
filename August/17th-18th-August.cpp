// 17th August 

class Solution {
  public:


  int uniqueMorseRepresentations(vector<string>& words) 
  {
  	vector<string> a = {".-","-...","-.-.","-..",".","..-.","--.","....",
                  "..",".---","-.-",".-..","--","-.","---",".--.",
                  "--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

  	unordered_map<string,int> um;

  	for (int i=0; i< words.size(); i++) {
  		string st;
  		for (int j=0; j<words[i].size(); j++) st += a[words[i][j] - 'a'];
  		um[st]=1;
  	 }

  return um.size ();
  }
  };


// 18th August 

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>h;
        for(int i = 0; i < arr.size(); i++) h[arr[i]]++;
        priority_queue<int> pq;
        for(auto it: h) pq.push(it.second);
        int ans = 0, minus = 0;
        while(!pq.empty())
        {
            ans++;
            minus += pq.top();
            pq.pop();
            if(minus >= (arr.size()/2)) break;
        }
        return ans;
    }
};
