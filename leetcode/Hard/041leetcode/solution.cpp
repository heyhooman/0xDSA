class Solution {
public:
    int firstMissingPositive(vector<int> &v) {
        
        int n= v.size();
        for(int i=0; i<n; i++){
            if(i+1==v[i]){
                continue;
            }
            int x = v[i];
            while(x>=1 && x<=n && x!=v[x-1]){
                swap(x, v[x-1]);
            }
        }
        for(int i=0; i<n; i++){
            if(i+1!=v[i]){
                return i+1;
            }
        }
        return n+1;
        
    }
};
