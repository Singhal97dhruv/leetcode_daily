class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int mxLen=0,res=0;
        vector<pair<int,int>>vect(nums.size(),{1,1});
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(vect[i].first==vect[j].first+1)vect[i].second+=vect[j].second;
                    else if(vect[i].first<vect[j].first+1)vect[i]={vect[j].first+1,vect[j].second};
                }
            }
            if(vect[i].first==mxLen){
                res+=vect[i].second;
            }
            else if(vect[i].first>mxLen){
                mxLen=vect[i].first;
                res=vect[i].second;
            }
        }
        return res;
    }
};