Add Binary

class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size()-1;
        int m=b.size()-1;
        string res="";
        int carry=0;
        while(n>=0 || m>=0){
            int sum=0;
            if(n>=0)
            sum+=(a[n--]-'0');
            if(m>=0)
            sum+=(b[m--]-'0');
            sum+=carry;
            res+=(to_string(sum%2));
            carry=sum/2;
        }
        if(carry)
            res.push_back('1');
        reverse(res.begin(),res.end());
        return res;
    }
};
