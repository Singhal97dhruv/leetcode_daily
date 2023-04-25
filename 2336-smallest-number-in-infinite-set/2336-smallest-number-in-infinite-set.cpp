class SmallestInfiniteSet {
public:
    set<int>set;
    SmallestInfiniteSet() {
        for(int i=1;i<=1000;i++){
            set.insert(i);
        }
    }
    
    int popSmallest() {
        int t=*set.begin();
        set.erase(t);
        return t;
    }
    
    void addBack(int num) {
        if(set.find(num)==set.end())
        set.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */