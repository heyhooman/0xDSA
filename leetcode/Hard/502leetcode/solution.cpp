class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();
        vector<pair<int,int>>a;
        for(int i=0;i<n;i++){
            a.push_back({capital[i],profits[i]});
        }
        sort(a.begin(),a.end());
        int i=0;
        priority_queue<int>pq;
        while(k--){
        while(i<n && a[i].first<=w){
            pq.push(a[i].second);
            i++;
        }
            if(pq.empty())
                break;
            w+=pq.top();
            pq.pop();
        }
        return w;
    }
};
