class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if(grid.empty())
            return 0;
        int rows = grid.size();
        int cols = grid[0].size();

        int res = 0; 

        for(int i = 0; i < rows; i++){

            for(int j = 0; j < cols ; j++){

                if(grid[i][j] == 1)
                {
                    res += 4;
                if(i > 0 && grid[i-1][j] == 1)
                    res -= 2;
                if(j > 0 && grid[i][j-1] ==1 )
                    res -= 2;

                }

            }

        }
        return res;

    }
};