class FreqStack {
public:
    FreqStack() {
        
    }
    unordered_map<int,int>freq;
    unordered_map<int,stack<int>>levStorage;
    int level=0;
    void push(int val) {
        freq[val]++;
        level=max(level,freq[val]);
        levStorage[freq[val]].push(val);
    }
    
    int pop() {
        if(levStorage[level].size()>1){
            int ans=levStorage[level].top();levStorage[level].pop();
            freq[ans]--;
            return ans;
        }
        int ans=levStorage[level].top();levStorage[level--].pop();
        freq[ans]--;
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */