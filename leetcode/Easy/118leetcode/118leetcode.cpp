/* 118. Pascal's Triangle

Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

 */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);

        for (int i = 0; i < numRows; ++i) {
            ans[i].resize(i + 1);
            ans[i][0] = ans[i][i] = 1;
  
            for (int j = 1; j < i; ++j){
                ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
        }
        
        return ans;
    }
};
