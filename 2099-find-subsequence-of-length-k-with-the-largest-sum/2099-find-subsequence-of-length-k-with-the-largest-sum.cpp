class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
    
        int n=nums.size(),sum=0;
        vector<pair<int,int>>temp;
        for(int i=0;i<nums.size();i++){
            temp.push_back({nums[i],i});
        }
        nth_element(temp.begin(),temp.end()-k,temp.end());
        // for(int i=n-k+1;i<n;i++)sum+=nums[i];
        
       sort(temp.end()-k,temp.end(),[](pair<int,int>&p1,pair<int,int>&p2){return p1.second<=p2.second;});
        
        vector<int>res;
        for(int i=n-k;i<n;i++)res.push_back(temp[i].first);
        
        return res;
        
        
    }
};