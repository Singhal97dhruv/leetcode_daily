class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
     
        int res=0,mx=0;
        for(int i=0;i<arr.size();i++){
            
            mx=max(arr[i],mx);
            if(mx==i)res++;
            
        }
        return res;
        
    }
};