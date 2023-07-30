class Solution {
public:
  
    // struct cmp{
    //     bool operator()(int &a,int &b){
    //         return a>b;
    //     }
    // };
    int findKthLargest(vector<int>& nums, int k) {
        
//         priority_queue<int,vector<int>,greater<int>>pq;
//         for(int i:nums){
//             pq.push(i);
//             if(pq.size()>k){
//                 pq.pop();
//             }
//         }
//             return pq.top();
        
        
//         nth_element(nums.begin(),nums.begin()+k-1,nums.end(),cmp());
//         return nums[k-1];
        
        auto cmp=[](int a, int b){return a>b;};
        
        nth_element(nums.begin(),nums.begin()+k-1,nums.end(),cmp);
        
        return nums[k-1];
        
    }
};