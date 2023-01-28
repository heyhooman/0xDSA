Data Stream as Disjoint Intervals

class SummaryRanges {
public:
    set<int>s;
    SummaryRanges() {
        s.clear();
    }
    
    void addNum(int value) {
        s.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>>res;
        vector<int>nums(begin(s),end(s));
        int n=nums.size();
        for(int i=0;i<n;i++){
            int left=nums[i];
            while(i<n-1 && (nums[i]+1==nums[i+1]))
                i++;
            res.push_back({left,nums[i]});
        }
        return res;
    }
};
