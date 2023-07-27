class Solution {
public:
    // void reverse(vector<int>&v,int i,int j){
    //     int left=i;
    //     int right=j;
    //     while(left<right){
    //         int temp=v[left];
    //         v[left]=v[right];
    //         v[right]=temp;
    //         left++;
    //         right--;
    //     }
    // }
    
    
    void rotate(vector<int>& nums, int k) {
        
        // int n=nums.size();
        // int tmp=n-k%n;
        // for(int i=0)
//          k=k%nums.size();
//         if(k < 0){ 
//             k += nums.size();
//         }
//         reverse(nums,0,nums.size()-k-1);
//         reverse(nums,nums.size()-k,nums.size()-1);
//         reverse(nums,0,nums.size()-1);
        
       int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
        
        
    }
};