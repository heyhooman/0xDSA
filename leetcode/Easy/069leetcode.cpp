/* 69. Sqrt(x)

Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python. */

class Solution {
public:
    int mySqrt(int x) {
        if(x == 0){
            return 0;
        }
        int s = 1, e = x;
        while (true) {
            int mid = s + (e - s)/2;
            if (mid > x/mid) {
                e = mid - 1;
            }
            else{
                if (mid + 1 > x/(mid + 1)){
                    return mid;
                }
                s = mid + 1;
            }
        }
    }
};
