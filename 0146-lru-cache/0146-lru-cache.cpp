class LRUCache {
public:
    unordered_map<int,list<pair<int,int>>::iterator>map;
    list<pair<int,int>>l1;
    int cap;
    
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        
        if(map.find(key)==map.end())return -1;
        l1.splice(l1.begin(),l1,map[key]);
        return map[key]->second;
    }
    
    void put(int key, int value) {
        
        if(get(key)!=-1){
            map[key]->second=value;
            return;
        }        
        while(map.size()==cap){
            int delKey= l1.back().first;
            l1.pop_back();
            map.erase(delKey);
        }
        l1.emplace_front(key,value);
        map[key]=l1.begin();
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */