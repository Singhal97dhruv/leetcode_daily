class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(int i:nums)pq.push(i);
        int i=pq.top();
        pq.pop();
        int j=pq.top();
        return (i-1)*(j-1);
    }
};