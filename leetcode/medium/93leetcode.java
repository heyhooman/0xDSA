//93. Restore IP Addresses

class Solution {
    private List<String> ipes;
    private int l;
    public List<String> restoreIpAddresses(String s) {
        ipes = new ArrayList<>();
        l = s.length();
        f(s, 0, "", 0);
        return ipes;
    }
    
    private boolean isIp(String ip){
        if(ip.length() > 3 || ip.length() == 0) return false;
        if(ip.length() > 1 && ip.charAt(0) == '0') return false;
        if(ip.length() > 0 && Integer.parseInt(ip) > 255) return false;
        return true; 
    }

    private void f(String s, int index, String ip, int dot){
        //base case
        if(dot == 3){
            if(isIp(s.substring(index))) {
                ip += s.substring(index);
                ipes.add(ip);
            }
            return;
        }

        //do all the stuff
        for(int i = index; i < l; i++){
            if(isIp(s.substring(index, i +1))){
                int k = s.substring(index, i+1).length();
                ip += s.substring(index, i+1) + ".";
                f(s, i+1, ip, dot+1);
                ip = ip.substring(0, ip.length() - k -1);
            }
        }
    }
}