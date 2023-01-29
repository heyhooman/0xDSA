class Solution {
public:
    bool less_speed(int mid , vector<int>& piles , int h){
        int n=piles.size();
        int total=0;
        for(int i=0;i<n;++i){
            int x=piles[i]/mid;
            int y=piles[i]%mid;
            if(y)
                ++x;
            total+=x;
        }
        return (total<=h);
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        int e=(int)(1e9+1);
        while(e>s){
            int mid=(s+e)/2;
            if(less_speed(mid,piles,h))
                e=mid;
            else
                s=mid+1;
        }
        return s;
    }
};

        

        /*if(piles.size()==h){
            sort(piles.begin(), piles.end());
            reverse(piles.begin(), piles.end());
            return piles[0];
            
        }
        return 0;*/

