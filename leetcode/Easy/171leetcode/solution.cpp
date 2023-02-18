/* 171. Excel Sheet Column Number

Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 */

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(char c : columnTitle)
        {
            int x = c - 'A' + 1;
            ans = ans * 26 + x;
        }
        return ans;
    }
};
