class Solution {
    public String minWindow(String s, String t) {
        HashMap<Character, Integer> map = new HashMap<>();
        for(int i = 0; i < t.length(); i++){
            char ch = t.charAt(i);
            map.put(ch, map.getOrDefault(ch, 0) + 1);
        }
        int required = map.size();
        int l = 0, r= 0, formed = 0;
        HashMap<Character, Integer> temp = new HashMap<>();
        int[] ans = new int[]{-1,0,0};
        while( r < s.length()){
            char c = s.charAt(r);
            temp.put(c, temp.getOrDefault(c, 0) + 1);

            if(map.containsKey(c) && map.get(c).intValue() == temp.get(c).intValue()) formed++;

            while(l <= r && formed == required){

                if(ans[0] == -1 || r - l + 1 < ans[0]){
                    ans[0] = r - l + 1;
                    ans[1] = l;
                    ans[2] = r;
                }

                char ch= s.charAt(l);
                temp.put(ch, temp.get(ch) -1);
                if(map.containsKey(ch) && map.get(ch).intValue() > temp.get(ch).intValue()) formed--;

                l++;
                
            }
            r++;
        }
        return ans[0] != -1 ? s.substring(ans[1], ans[2] + 1) : "";
    }
}