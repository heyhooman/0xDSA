class Solution {
public:
    int t[501][501];
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0)
                    t[i][j]=j;
                if(j==0)
                    t[i][j]=i;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(word1[i-1]==word2[j-1])
                    t[i][j]=t[i-1][j-1];
                else{
                    t[i][j]=1+min({t[i][j-1],t[i-1][j],t[i-1][j-1]});
                }
            }
        }
        return t[n][m];
    }
};