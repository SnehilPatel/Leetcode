class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size(), ans = 0;
        for(int dx = -n-1; dx < n; dx++){
            for(int dy = -n-1; dy < n; dy++){
                int temp = 0;
                for(int x = 0; x < n && x + dx < n; x++){
                    if(x + dx < 0) continue;
                    for(int y = 0; y < n && y + dy < n; y++){
                        if(y + dy < 0) continue;
                        if(img1[x][y] == 1 && img1[x][y] == img2[x+dx][y+dy]) temp ++;
                    }
                }
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};