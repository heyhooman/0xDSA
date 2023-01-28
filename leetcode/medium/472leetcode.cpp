Concatenated Words

class Solution {
public:
    unordered_map<string,bool>mp;
    bool solve(string &word,unordered_set<string>&s){
        if(mp.find(word)!=mp.end())
            return mp[word];
            
        int l=word.size();
        for(int i=0;i<l;i++){
            string prefix=word.substr(0,i+1);
            string suffix=word.substr(i+1);
            if((s.find(prefix)!=s.end() && s.find(suffix)!=s.end()) || s.find(prefix)!=s.end() && solve(suffix,s))
                return mp[word]=true;
        }
        return mp[word]=false;
    }
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        int n=words.size();
        mp.clear();
        vector<string>res;
        unordered_set<string>s(begin(words),end(words));
        for(int i=0;i<n;i++){
         if(solve(words[i],s))
             res.push_back(words[i]);
        }
        return res;
    }
};
