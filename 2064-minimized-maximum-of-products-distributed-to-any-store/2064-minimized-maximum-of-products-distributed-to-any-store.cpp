class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        
        int left=1,right=*max_element(quantities.begin(),quantities.end());
        while(left<=right){
            int mid=left+(right-left)/2;
            int cnt=0;
            for(int i:quantities)cnt+=(i+mid-1)/mid;
            if(cnt>n)left=mid+1;
            else right=mid-1;
        }
        return left;
        
    }
};