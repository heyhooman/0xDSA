LFU Cache

class LFUCache {
public:
    
    int cap,size;
    map<int,list<vector<int>>>freq;
    unordered_map<int,list<vector<int>>::iterator>mp;
    LFUCache(int capacity) {
        cap=capacity;
        size=0;
    }
    
    void solve(int key){
         auto &vec=*(mp[key]); 
        int val=vec[1];
        int f=vec[2];
        
        freq[f].erase(mp[key]);
        if(freq[f].empty())
            freq.erase(f);
        
        f++;
        
        freq[f].push_front({key,val,f});
        mp[key]=freq[f].begin();
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end())
            return -1;
        
        auto v=*(mp[key]);
        int value=v[1];
        
        solve(key);
        
        return value; 
    }
    
    void put(int key, int value) {
        if(cap==0)
            return;
        if(mp.find(key)!=mp.end()){
            auto &vec=*(mp[key]);
            vec[1]=value;
            solve(key);
        }
        else if(size<cap){
            size++;
            freq[1].push_front({key,value,1});
            mp[key]=freq[1].begin();
        }
        else{
            auto &itr=freq.begin()->second;
            int k=itr.back()[0];
            itr.pop_back();
            if(itr.empty()){
                freq.erase(freq.begin()->first);
            }
            freq[1].push_front({key,value,1});
            mp.erase(k);
            mp[key]=freq[1].begin();
        }
    }
};
