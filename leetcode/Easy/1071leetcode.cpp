Greatest Common Divisor of Strings

class Solution {
public:
    
    string solve(string a,string b){
        if(a.length()<b.length())
            return solve(b,a);
        else if(a.find(b)!=0)
            return "";
        else if(b=="")
            return a;
        else
            return solve(a.substr(b.size()),b);
    }
    
    string gcdOfStrings(string str1, string str2) {
        return solve(str1,str2);
    }
};
