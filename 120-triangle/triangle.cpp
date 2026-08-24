class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int sum=0;
        for(int i=triangle.size()-2 ; i>=0 ; i--){
        for(int j=0;j<=i;j++){
            int minimum = min(triangle[i+1][j], triangle[i+1][j+1]);

            triangle[i][j]+=minimum;
            }
        }
        return triangle[0][0];
    }
};