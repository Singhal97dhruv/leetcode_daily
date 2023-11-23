class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
        
            vector<int>temp(nums.begin()+l[i],nums.begin()+r[i]+1);
            sort(temp.begin(),temp.end());
            int diff=temp[1]-temp[0],j=2;
            for(j=2;j<temp.size();j++){
                if(temp[j]-temp[j-1]!=diff)break;
            }
            if(j==temp.size())ans.push_back(true);
            else ans.push_back(false);
            
        }
        
        return ans;
    }
};