Apply Bitwise Operations to Make Strings Equal

You are given two 0-indexed binary strings s and target of the same length n. You can do the following operation on s any number of times:

Choose two different indices i and j where 0 <= i, j < n.
Simultaneously, replace s[i] with (s[i] OR s[j]) and s[j] with (s[i] XOR s[j]).
For example, if s = "0110", you can choose i = 0 and j = 2, then simultaneously replace s[0] with (s[0] OR s[2] = 0 OR 1 = 1), and s[2] with (s[0] XOR s[2] = 0 XOR 1 = 1), so we will have s = "1110".

Return true if you can make the string s equal to target, or false otherwise.
  
  class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        int n=s.size();
        int ones=0,onet=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                ones++;
            if(target[i]=='1')
                onet++;
        }
        if(ones==0 || onet==0)
            return s==target;
        return true;
    }
};
