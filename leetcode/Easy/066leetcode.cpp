/* 66. Plus One

You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits. */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n= digits.size()-1;
        int i=n;
        while(i>=0){
           if (digits[i] == 9) {  
               digits[i] = 0;
           }
           else{
               digits[i]+=1;
               return digits;
           }
           --i;
        }
        digits.push_back(0);
        digits[0] = 1;
        return digits;
        

    }
};
