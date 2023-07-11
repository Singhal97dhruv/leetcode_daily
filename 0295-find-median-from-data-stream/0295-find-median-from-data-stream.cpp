class MedianFinder {
public:
    
    priority_queue<int>maxHeap;
    priority_queue<int,vector<int>,greater<int>>minHeap;
    
    MedianFinder() {
        // I am of no use :)
    }
    
    void addNum(int num) {
        
        maxHeap.push(num);
        minHeap.push(maxHeap.top());
        maxHeap.pop();
        if(minHeap.size()>maxHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
        
    }
    
    double findMedian() {
        if(maxHeap.size()>minHeap.size())return (double)maxHeap.top();
        return ((double)(maxHeap.top()+minHeap.top()))/2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */