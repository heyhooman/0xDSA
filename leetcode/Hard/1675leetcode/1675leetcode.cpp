class Solution {
public:
  
  // Firstly make all array elements even from the given condition
  // now as all are even we use a set and find max-min and divide max by
  //2 to decrease it and obtain a smaller deviation value
  // we stop if we find any odd element as we cannot do anything further after that
  
    int minimumDeviation(vector<int>& nums) {
     int n=nums.size();
      set<int>s;
        for(int i=0;i<n;i++){
            if(nums[i]%2){
                s.insert(2*nums[i]);
            }
            else
                s.insert(nums[i]);
        }
        int ans=*s.rbegin()-*s.begin();
        while(1){
            int a=*s.rbegin();
            int b=*s.begin();
            ans=min(ans,a-b);
            if(a%2)
            return ans;
            s.erase(a);
            s.insert(a/2);
        }
        return ans;
    }
};
