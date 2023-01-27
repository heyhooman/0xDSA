//2544. Alternating Digit Sum

class Solution {
    public int alternateDigitSum(int n) {
        int res = 0, sign = 1;
        while(n > 0){
            sign *= -1;
            res += n%10 * sign;
            n/=10;
        }
        return res*sign;
    }
}



//2545. Sort the Students by Their Kth Score

class Solution {
    public int[][] sortTheStudents(int[][] score, int k) {
         Arrays.sort(score, (s1, s2) -> s2[k] - s1[k]);
         return score;
    }
}

//