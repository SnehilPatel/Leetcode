class Solution {
public:
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi = 0;
        for(int r = 0; r < grid.size(); r++)
        {
            for(int c = 0; c < grid[r].size(); c++)
            {
                if(grid[r][c] == 1)
                    maxi = max(maxi, dfs(grid, r, c));
            }
        }
        return maxi;
    }
    
    int dfs(vector<vector<int>> &grid, int r, int c)
    {
        if(r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == 0)
            return 0;
        
        int area = 1;
        grid[r][c] = 0;
        
        area += dfs(grid, r+1, c);
        area += dfs(grid, r, c+1);
        area += dfs(grid, r-1, c);
        area += dfs(grid, r, c-1);
        
        return area;
    }
};