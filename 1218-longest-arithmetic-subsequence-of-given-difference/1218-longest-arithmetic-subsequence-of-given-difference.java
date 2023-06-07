class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        
        unordered_map<int,int>map;
        int ans=1;
        for(int &i:arr){
            ans=max(ans,map[i]=1+map[i-difference]);
        }
        return ans;
        
    }
};