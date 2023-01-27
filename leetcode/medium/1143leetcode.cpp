Longest Common Subsequence

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
         int n=text1.size();
        int m=text2.size();
        vector<vector<int>>t(n+1,vector<int>(m+1,-1));
        return lcs(text1,text2,n,m,t);
    }
    int lcs(string &x1,string &x2,int i,int j,vector<vector<int>>&t){
        if(i==0 || j==0)
            return 0;
        if(t[i][j]!=-1)
            return t[i][j];
        if(x1[i-1]==x2[j-1])
            return t[i][j]=1+lcs(x1,x2,i-1,j-1,t);
        else
            return t[i][j]=max(lcs(x1,x2,i-1,j,t),lcs(x1,x2,i,j-1,t));
    }
};
