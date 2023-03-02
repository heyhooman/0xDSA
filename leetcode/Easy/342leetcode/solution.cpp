class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0) return false;
        while(n!=1){
            int r=n%4;
            n=n/4;
            if(r!=0) return false;
        }
        return true;
        

    }
};
