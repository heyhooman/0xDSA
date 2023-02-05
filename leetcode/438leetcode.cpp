Find All Anagrams in a String

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int s_len=s.size(),p_len=p.size();
        vector<int>ans;
        if(p_len>s_len)
            return ans;
        vector<int>freq1(26,0),freq2(26,0);
        for(int i=0;i<p_len;i++){
            freq1[p[i]-'a']++;
            freq2[s[i]-'a']++;
        }
        if(freq1==freq2){
            ans.push_back(0);
        }
        for(int i=p_len;i<s_len;i++){
            freq2[s[i-p_len]-'a']--;
            freq2[s[i]-'a']++;
            if(freq1==freq2)
                ans.push_back(i-p_len+1);
        }
        return ans;
    }
};
