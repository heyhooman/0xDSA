/* 875. Koko Eating Bananas

Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.

  */

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

