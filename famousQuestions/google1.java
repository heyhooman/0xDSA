//The edit distance between two strings refers to the minimum number of character insertions, deletions, and substitutions required to change one string to the other. For example, the edit distance between “kitten” and “sitting” is three: substitute the “k” for “s”, substitute the “e” for “i”, and append a “g”.

// Given two strings, compute the edit distance between them.


//recursive solution
class Solution {
    public int minDistance(String word1, String word2) {
        return helper(word1, word2, word1.length(), word2.length()) ;
    }
    private int helper(String s1, String s2, int i , int j){
        if(i==0) return j;
        if(j==0) return i;

        if(s1.charAt(i-1) == s2.charAt(j-1)) return helper(s1,s2,i-1, j-1);
        return Math.min(helper(s1,s2,i-1, j-1), Math.min(helper(s1,s2,i-1,j), helper(s1,s2,i,j-1))) + 1;
    }
}


//memoization
class Solution {
    private int[][] dp;
    public int minDistance(String word1, String word2) {
        dp = new int[word1.length() + 1][word2.length()+1];
        for(int i = 0; i <= word1.length(); i++){
            for(int j = 0; j <= word2.length(); j++){
                dp[i][j] = -1;
            }
        }
        return helper(word1, word2, word1.length(), word2.length()) ;
    }
    private int helper(String s1, String s2, int i , int j){
        if(i==0) return j;
        if(j==0) return i;
        if(dp[i][j] != -1) return dp[i][j];
        if(s1.charAt(i-1) == s2.charAt(j-1)) return dp[i][j] = helper(s1,s2,i-1, j-1);
        return dp[i][j] = Math.min(helper(s1,s2,i-1, j-1), Math.min(helper(s1,s2,i-1,j), helper(s1,s2,i,j-1))) + 1;
    }
}


//tavulation
class Solution {
    private int[][] dp;
    public int minDistance(String word1, String word2) {
        dp = new int[word1.length() + 1][word2.length()+1];
        for(int i = 0; i <= word2.length(); i++) dp[0][i] = i;
        for(int i = 0; i <= word1.length(); i++) dp[i][0] = i;
        for(int i = 1; i <= word1.length(); i++){
            for(int j = 1; j <= word2.length(); j++){

                if(word1.charAt(i-1) == word2.charAt(j-1)) dp[i][j] = dp[i-1][j-1];
                else dp[i][j] = Math.min(dp[i-1][j-1], Math.min(dp[i-1][j], dp[i][j-1])) + 1;       
            }
        }
        return dp[word1.length()][word2.length()];
    }
}
