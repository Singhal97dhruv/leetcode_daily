class RandomizedSet {
public:
    
    unordered_map<int,int>map;
    vector<int>vect;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(map.find(val)!=map.end())return false;
        vect.push_back(val);
        map[val]=vect.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(map.find(val)==map.end())return false;
        
        int last=vect.back();
        map[last]=map[val];
        vect[map[val]]=last;
        vect.pop_back();
        map.erase(val);
        return true;
        
    }
    
    int getRandom() {
        return vect[rand()%vect.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */