class Solution {
      public String convert(String s, int numRows) {
         if(numRows == 1) return s;
        StringBuilder str = new StringBuilder();
        int cycle = numRows*2 - 2;
        for (int i = 0; i < numRows; i++) {
            for (int j = i, k = cycle - i; j < s.length(); k += cycle, j += cycle) {
                str.append(s.charAt(j));
                if (i != 0 && j != k && k < s.length() ){
                    str.append(s.charAt(k));
                }
            }
        }
        return str.toString();
    }
}