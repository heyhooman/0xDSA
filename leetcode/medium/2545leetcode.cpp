Sort the Students by Their Kth Score

class Solution {
public:
    
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>>res;
        vector<pair<int,int>>p;
        int n=score.size();
        int m=score[0].size();
        
        for(int i=0;i<n;i++){
            p.push_back({score[i][k],i});
        }
        sort(p.begin(),p.end());
        for(int j=n-1;j>=0;j--){
            res.push_back(score[p[j].second]);
        }
        return res;
    }
};
