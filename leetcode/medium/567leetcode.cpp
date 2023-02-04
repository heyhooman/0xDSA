Permutation in String

Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 class Solution {
public:

    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<int>freq1(26,0),freq2(26,0);
        for(auto x:s1){
            freq1[x-'a']++;
        }
        int end=0,start=0;
        while(end<m){
            freq2[s2[end]-'a']++;
            if(end-start+1==n)
            {
                if(freq1==freq2)
                    return true;
            }
            if(end-start+1<n)
            {
                end++;
            }
            else{
                freq2[s2[start]-'a']--;
                start++;
                end++;
            }
        }
        return false;
    }
};
