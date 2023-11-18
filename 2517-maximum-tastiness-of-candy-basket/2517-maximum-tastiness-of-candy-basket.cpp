class Solution {
public:
    
    bool check(vector<int>&price,int k,int x){
        int cnt=1;
        int prev=price[0],i=1;
        while(cnt<k && i<price.size()){
            if(price[i]-prev>=x){
                cnt++;
                prev=price[i];
            }
            i++;
        }
        return cnt==k;
    }
    
    
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(),price.end());
        int left=0;
        int right=1e9;
        while(left<right){
            int mid=left+(right-left)/2;
            if(check(price,k,mid))left=mid+1;
            else right=mid;
        }
        return left-1;        
    }
};