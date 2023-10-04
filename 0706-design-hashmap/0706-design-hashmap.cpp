class MyHashMap {
public:
    vector<int>vect;
    MyHashMap() {
        vect.resize(1e6+1,-1);
    }
    
    void put(int key, int value) {
        vect[key]=value;
    }
    
    int get(int key) {
        return vect[key];
    }
    
    void remove(int key) {
        vect[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */