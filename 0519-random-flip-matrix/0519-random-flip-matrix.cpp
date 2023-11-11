class Solution {
public:
    
    int row,col,mx;
    unordered_set<int>set;
    Solution(int m, int n) {
        row=m,col=n;
        mx=row*col;
    }
    
    vector<int> flip() {
        if(set.size()==mx)return {};
        int rnd=rand()%mx;
        while(set.count(rnd)){
            rnd=(++rnd)%mx;
        }
        set.insert(rnd);
        return {rnd/col,rnd%col};
        
    }
    
    void reset() {
        set={};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */