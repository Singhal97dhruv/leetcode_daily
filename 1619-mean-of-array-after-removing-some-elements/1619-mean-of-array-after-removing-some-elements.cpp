class Solution {
public:
    double trimMean(vector<int>& arr) {
        
        priority_queue<int>pqG;
        priority_queue<int,vector<int>,greater<>>pqL;
        int trim=(arr.size()/20);
        int limit=arr.size()-trim*2;
        double ans=0;
        for(int i:arr){
            pqG.push(i);
            if(pqG.size()>trim){
                int num=pqG.top();pqG.pop();
                pqL.push(num);
                if(pqL.size()>trim){
                    ans+=pqL.top();
                    pqL.pop();
                }
            }
        }
        return ans/limit;
        
    }
};