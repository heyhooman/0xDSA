Restore IP Addresses
A valid IP address consists of exactly four integers separated by single dots. Each integer is between 0 and 255 (inclusive) and cannot have leading zeros.

For example, "0.1.2.201" and "192.168.1.1" are valid IP addresses, but "0.011.255.245", "192.168.1.312" and "192.168@1.1" are invalid IP addresses.
Given a string s containing only digits, return all possible valid IP addresses that can be formed by inserting dots into s. You are not allowed to reorder or remove any digits in s. You may return the valid IP addresses in any order.
  
  SOLUTION
  class Solution {
public:
    int n;
    
    bool isValid(string str){
        if(str[0]=='0')
            return false;
        return stoi(str)<=255;
    }
    
    void solve(string &s,vector<string>&res,string cur,int idx,int parts){
        if(idx==n && parts==4)
        {
            cur.pop_back(); //removing the extra dot at the last 
            res.push_back(cur);
            return;
        }
        if(idx+1 <=n)
        solve(s,res,cur + s.substr(idx,1) + ".",idx+1,parts+1);
        
        if(idx+2<=n && isValid(s.substr(idx,2)))
        solve(s,res,cur+s.substr(idx,2)+".",idx+2,parts+1);
        
        if(idx+3<=n && isValid(s.substr(idx,3)))
        solve(s,res,cur+s.substr(idx,3)+".",idx+3,parts+1);
    }
    
    vector<string> restoreIpAddresses(string s) {
        n=s.size();
        if(n>12)
            return {};
        vector<string>res;
        int parts=0;
        string cur="";
        solve(s,res,cur,0,0);
        return res;
    }
};
