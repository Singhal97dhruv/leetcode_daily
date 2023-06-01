class Solution {
public:
    
    struct cmp{
        bool operator()(vector<int>&A,vector<int>&B){
            if(A[1]<B[1])return true; 
            else if(A[1]==B[1])return A[0]<B[0];
            else return false;
        }
    };
    
    int maxEvents(vector<vector<int>>& events) {
        
        sort(events.begin(),events.end(),cmp());
        int cnt=0;
        set<int>set;
        for(int i=1;i<=100000;i++)set.insert(i);
        
        for(auto i:events){
            int st=i[0],end=i[1];
            auto it=set.lower_bound(st);
            if(it==set.end()|| *it>end)continue;
            cnt++;
            set.erase(it);
        }
        return cnt;
        
        
    }
};