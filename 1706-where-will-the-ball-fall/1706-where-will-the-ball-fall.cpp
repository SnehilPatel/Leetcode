class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> ans(m,-1);
        for(int col =0; col<m;col++)
        {
            int x = 0;
            int y = col;
            int i;
            for(i=0;i<n;i++)
            {
                if((y==0 && grid[x][y]==-1) || (y==m-1 && grid[x][y]==1))
                    break;
                if(grid[x][y+grid[x][y]] != grid[x][y])
                    break;
                
                y += grid[x][y];
                x += 1;
            }
            
            if(i==n)
                ans[col] = y;
        }
        return ans;
    }
};