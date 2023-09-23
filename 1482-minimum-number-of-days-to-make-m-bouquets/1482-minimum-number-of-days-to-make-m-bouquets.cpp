class Solution {
public:
    
    
    int bin(vector<int>&days,int limit,int k,int m){
    
        int cnt=0,res=0;
        for(int i=0;i<days.size();i++){
            if(days[i]<=limit)cnt++;
            else cnt=0;
            
            if(cnt==k){
                res++,cnt=0;
            }
            
        }
        return res>=m;
    }
    
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        auto p=minmax_element(bloomDay.begin(),bloomDay.end());
        int left=*p.first,right=*p.second;
        while(left<right){
            int mid=left+(right-left)/2;
            if(bin(bloomDay,mid,k,m)){
                right=mid;
            }
            else left=mid+1;
        }
        return bin(bloomDay,left,k,m)?left:-1;
        
    }
};