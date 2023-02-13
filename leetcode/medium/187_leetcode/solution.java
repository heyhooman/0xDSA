class Solution {
    public List<String> findRepeatedDnaSequences(String s) {
        List<String> list = new ArrayList<>();
        HashSet<String> set = new HashSet();
        for(int i = 0; i+9 < s.length(); i++){
            String st = s.substring(i, i + 10);
            if(!set.add(st)) {
                if(!list.contains(st)) list.add(st);
            }
        }
        return list;
    }
}