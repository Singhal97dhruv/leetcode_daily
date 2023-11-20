class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        vector<int>prefix;
        prefix.push_back(0);
        vector<int>cnt(3);
        int temp=0;
        for(int i:travel){
            temp+=i;
            prefix.push_back(temp);
        }
        int m=-1,g=-1,p=-1,i=garbage.size()-1;
        while(i>=0){
            for(char c:garbage[i]){
                if(c=='M'){
                    if(m==-1)m=i;
                    cnt[0]++;
                }
                if(c=='G'){
                    if(g==-1)g=i;
                    cnt[1]++;
                }
                if(c=='P'){
                    if(p==-1)p=i;
                    cnt[2]++;
                }
            }
            i--;
        }
        int ans=0;
        if(m!=-1)ans+=cnt[0]+prefix[m];
        if(g!=-1)ans+=cnt[1]+prefix[g];
        if(p!=-1)ans+=cnt[2]+prefix[p];
        
        return ans;
        
        
    }
};