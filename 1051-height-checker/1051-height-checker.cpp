class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // int cnt=0;
        // vector<int>v=heights;
        // sort(v.begin(),v.end());
        // for(int i=0;i<v.size();i++){
        //     if(heights[i]!=v[i])cnt++;
        // }
        // return cnt;
        vector<int>v(101,0);
        int cnt=0;
        for(int i:heights)v[i]++;
        
        int i=1,j=0;
        while(i<101){
            if(v[i]==0)i++;
            else{
                if(i!=heights[j]){
                    cnt++;
                }
                    v[i]--,j++;
            }
        }
        return cnt;
        
    }
};