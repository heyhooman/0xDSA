Palindrome Partitioning

class Solution {
public:
    int n;
    
    bool isPal(string &s,int l,int r){
        if(r==l)
            return true;
        while(l<r){
            if(s[l]!=s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    
    void backtrack(string &s,int idx,vector<vector<string>>&res,vector<string>&cur){
        if(idx==n){
            res.push_back(cur);
            return;
        }
        for(int i=idx;i<n;i++){
            if(isPal(s,idx,i)){
                cur.push_back(s.substr(idx,i-idx+1));
                backtrack(s,i+1,res,cur);
                cur.pop_back();
            }
        }
               return;
    }
    
    vector<vector<string>> partition(string s) {
        n=s.size();
        vector<vector<string>>res;
        vector<string>cur;
        backtrack(s,0,res,cur);
        return res;
    }
};
