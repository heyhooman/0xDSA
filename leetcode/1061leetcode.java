//1061. Lexicographically Smallest Equivalent String


class Solution {
    int[] root = new int[26];

    // recursively get the root element
    int get(int x) {
        return x == root[x] ? x : (root[x] = get(root[x]));
    }

    // unite two elements
    void unite(int x, int y) {
        // find the root of x
        x = get(x);
        // find the root of y
        y = get(y);
        // if their roots are not same, we combine them
        if (x != y) {
            // smaller first
            if (x < y)  root[y] = x;
            else root[x] = y;
        }
        return;
    }
    
    public String smallestEquivalentString(String s1, String s2, String baseStr) {
        String ans = "";
        // init root. initialy each element is in its own group.
        for (int i = 0; i < 26; i++)  root[i] = i;
        // unite each character
        for (int i = 0; i < s1.length(); i++) unite(s1.charAt(i) - 'a', s2.charAt(i) - 'a');
        // build the final answer from the root element (smallest)
        for (int i = 0; i < baseStr.length(); i++) {
            ans += (char)(get(baseStr.charAt(i) - 'a') + 'a');
        }
        return ans;
    }
}