class MedianFinder {
public:
    
    priority_queue<int>mxQ;
    priority_queue<int,vector<int>,greater<int>>mnQ;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        
        mxQ.push(num);
        mnQ.push(mxQ.top());
        mxQ.pop();
       if(mnQ.size()>mxQ.size()){
           mxQ.push(mnQ.top());
           mnQ.pop();
       }
        
    }
    
    double findMedian() {
        if(mxQ.size()>mnQ.size())return (double)mxQ.top();
        return (double)(mnQ.top()+mxQ.top())/2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */