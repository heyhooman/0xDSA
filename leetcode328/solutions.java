//2535. Difference Between Element Sum and Digit Sum of an Array

class Solution {
    public int differenceOfSum(int[] nums) {
        int eleSum = 0,digSum = 0;
        for(int i = 0; i < nums.length; i++){
            eleSum += nums[i];
            while(nums[i] != 0){
                digSum += nums[i]%10;
                nums[i] /= 10;
            }
        }
        return Math.abs(eleSum - digSum);
    }
}


//2536. Increment Submatrices by One
class Solution {
    private int[][] mat;
    public int[][] rangeAddQueries(int n, int[][] queries) {
        mat = new int[n][n];
        for(int k = 0; k < queries.length; k++){
            int row1 = queries[k][0], col1 = queries[k][1], row2 = queries[k][2], col2 =queries[k][3];
            for(int i = row1 ; i <= row2; i++){
                for(int j = col1 ; j <= col2; j++){
                    mat[i][j] += 1;
                }
            }
        }
        return mat;
    }
}