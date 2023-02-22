class Solution {
public:
    
    bool feasible(int cap,int days,const vector<int>& weights){
        int d=1;
        int total=0;
        for(int i:weights){
            total+=i;
            if(total>cap){
                total=i;
                d++;
                if(d>days)return false;
            }
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int right=accumulate(weights.begin(),weights.end(),0);
        int left=*max_element(weights.begin(),weights.end());
        while(left<right){
            int mid=left+(right-left)/2;
            if(feasible(mid,days,weights)){
                right=mid;
            
            }
            else left=mid+1;
        }
        return left;
    }
};