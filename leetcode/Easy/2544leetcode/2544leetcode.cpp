Alternating Digit Sum

class Solution {
public:
    int alternateDigitSum(int n) {
        long long res=0;
        while(n){
            res=res*10+n%10;
            n/=10;
        }
        long long ans=0;
        long long count=0;
        while(res){
            if(count%2==0){
                ans+=(res%10);
            }
            else{
                ans-=(res%10);
            }
            count++;
            res/=10;
        }
        return ans;
    }
};
