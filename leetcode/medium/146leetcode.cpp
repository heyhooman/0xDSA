LRU Cache

class LRUCache {
public:
    
    list<int>dll;
    unordered_map<int,pair<list<int>::iterator,int>>mp;
    
    int n;
    
    LRUCache(int capacity) {
        n=capacity;
    }
    
    void setAtFirst(int key){
        dll.erase(mp[key].first);
        dll.push_front(key);
        mp[key].first=dll.begin();
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end())
            return -1;
        int val=mp[key].second;
        setAtFirst(key);
        return val;
    }
    
    void put(int key, int value) {
    if(mp.find(key)==mp.end()){
      dll.push_front(key);
      mp[key]={dll.begin(),value};
        n--;
     } 
        else{
            setAtFirst(key);
            mp[key].second=value;
        }
      if(n<0){
          mp.erase(dll.back());
          dll.pop_back();
          n++;
      }  
    }
};
