// A binary string is monotone increasing if it consists of some number of 0's (possibly none), followed by some number of 1's (also possibly none).

// You are given a binary string s. You can flip s[i] changing it from 0 to 1 or from 1 to 0.

// Return the minimum number of flips to make s monotone increasing.

class Solution {
public:
    int minFlipsMonoIncr(string s) {
     int n=s.size();
        long flips=0,count=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                count++;
            else{
                flips=min(1+flips,count);
            }
        }
        return flips;
    }
};
