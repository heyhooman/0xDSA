Fruit Into Baskets

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int i=0,j=0,ans=0;
       // i starting index of our window
       // j is the ending index of our window
        unordered_map<int,int>mp; // map for storing the size of distinct fruits
        while(j<n){
            mp[fruits[j]]++;
            while(mp.size()>2){
                if(mp[fruits[i]]==1)
                    mp.erase(fruits[i]);
                else
                    mp[fruits[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
