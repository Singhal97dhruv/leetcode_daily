class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    unordered_map<int,int>map;
    vector<int>vect;
    bool insert(int val) {
        if(map.find(val)!=map.end())return false;
        
        vect.push_back(val);
        map[val]=vect.size()-1;
        return true;
    }
    
    bool remove(int val) {
        
        if(map.find(val)==map.end())return false;
        
        int Idx=map[val];
        vect[Idx]=vect[vect.size()-1];
        map[vect[Idx]]=Idx;

        map.erase(val);
        vect.pop_back();
        
        return true;        
    }
    
    int getRandom() {
        int n=vect.size();
        return vect[rand()%n];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */