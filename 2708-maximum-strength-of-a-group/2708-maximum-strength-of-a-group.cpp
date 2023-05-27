class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        vector<int>neg,pos;
        long long ans=1;
        for(int i:nums){
           if(i<0) neg.push_back(i);
            if(i>0) pos.push_back(i);
                // ans=(long long)ans*i;
        }
        
        for(int i:pos)
            ans=(long long)ans*i;
        
        sort(neg.begin(),neg.end());     
        int ng=neg.size();
        if(ng%2==0){
            for(int i:neg){
                ans=(long long)ans*(-i);
            }
        }
        else{
            for(int i=0;i<ng-1;i++)
                ans=(long long)ans*(-neg[i]);
        }
        // if()
        int ps=pos.size(),n=nums.size();
        if(ps+ng<n && ng>ps && ng==1)return 0;
        if(ps==0 && ng==0)return 0;
        if(ps==0 && n==1 && ng==1)return neg[0];
        return ans;
        
    }
};