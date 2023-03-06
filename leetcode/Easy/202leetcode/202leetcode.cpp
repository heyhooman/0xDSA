/* 202. Happy Number */

class Solution {
public:
    bool isHappy(int n) {

        int slow, fast;
        slow = fast = n;
        do{
            slow = square(slow);
            fast = square(fast);
            fast = square(fast);
        }
        while(slow != fast);
        if(slow==1){
          return true;
        }
        return false;
    }
    int square(int n) {
        int sum = 0, tmp;
        while (n) {
            tmp = n % 10;
            sum += tmp * tmp;
            n /= 10;
        }
        return sum;
}
};
