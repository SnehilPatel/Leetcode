class Solution {      
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxi=0;
       for(int i=0;i<points.size();i++)
       {
           for(int j=i+1;j<points.size();j++)
           {
               for(int k=j+1;k<points.size();k++)
               {
                   double x1=points[i][0];
                   double y1=points[i][1];
                   double x2=points[j][0];
                   double y2=points[j][1];
                   double x3=points[k][0];
                   double y3=points[k][1];
                   double area=0.5*(abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
                   maxi=max(area,maxi);
               }
           }
       }
        return maxi;
    
    }
};