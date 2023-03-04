class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>temp;
        int ans=0;
        for(int i=0;i<bank.size();i++){
            int cnt=0;
            for(int j=0;j<bank[0].size();j++){
                if(bank[i][j]=='1')cnt++;
            }
            temp.push_back(cnt);
        }
        int res=0,t=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]>0){
               res+=t*temp[i];
                t=temp[i];
            }
        }
       return res;
    }
};