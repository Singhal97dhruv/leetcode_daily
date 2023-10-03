class Solution {
public:
    
    unordered_map<int,int>cnt;
    
    int getPow(int x){
    if(cnt[x] || x == 1)
        return cnt[x] ;
    
    if(x % 2)
        cnt[x] = 1+getPow(3*x + 1);
    else
        cnt[x] = 1+getPow(x/2);
    
    return cnt[x] ;
}
    int getKth(int lo, int hi, int k) {
        
        map<int,vector<int>>map;
        for(int i=lo;i<=hi;i++){
            int m=getPow(i);
            map[m].push_back(i);
        }

        
        for(auto n:map){
            if(k>n.second.size())k-=n.second.size();
            else{
                sort(n.second.begin(),n.second.end());
                return n.second[k-1];
            }
        }
        return -1;
        
        
    }
};