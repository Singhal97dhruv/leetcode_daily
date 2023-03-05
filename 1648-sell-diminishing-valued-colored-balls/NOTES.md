class Solution {
public:
map<int,int,greater<>>map;
bool isFeasible(long long mid,int orders){
long cnt=0;
for(auto &[i,cnt]:map){
if(i<=orders)break;
orders-=(long)(i-mid)*cnt;
if(orders<=0)return true;
}
return orders<=0;
}
int maxProfit(vector<int>& inventory, int orders) {
for(int i:inventory)map[i]++;
long long left=0,mod=1e9+7,right=*max_element(inventory.begin(),inventory.end()),res=0;
while(left<right){
long long mid=left+(right-left)/2;
if(isFeasible(mid,orders))left=mid+1;
else right=mid;
}
cout<<left;
for(auto &[i,cnt]:map){
if(i<=left)break;
orders-=(i-left)*cnt;
res= (res+((i-left)*(i+left+1)/2%mod)*cnt%mod)%mod;
cout<<res;
}
if(orders)res=(res+(orders*left)%mod)%mod;
return res;
}
};