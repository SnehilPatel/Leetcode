class Solution {
public:
    void floodFill(int i, int j, vector<vector<int>>& image, int oldColor, int newColor){
        if(i>=image.size() or i<0 or j>=image[0].size() or j<0 or image[i][j]!=oldColor){
            return;
        }
        image[i][j] = newColor;
        floodFill(i+1,j,image,oldColor,newColor);
        floodFill(i-1,j,image,oldColor,newColor);
        floodFill(i,j+1,image,oldColor,newColor);
        floodFill(i,j-1,image,oldColor,newColor);   
    }
  
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        if(color==oldColor)
            return image;
        floodFill(sr,sc,image,oldColor,color);
        return image;
    }
};