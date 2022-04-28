Given two integers n and k, construct a list answer that contains n different positive integers ranging from 1 to n and obeys the following requirement:

Suppose this list is answer = [a1, a2, a3, ... , an], then the list [|a1 - a2|, |a2 - a3|, |a3 - a4|, ... , |an-1 - an|] has exactly k distinct integers.
Return the list answer. If there multiple valid answers, return any of them.
  
  class Solution {
public:
    vector<int> constructArray(int n, int k) {
        
        vector<int>res;
        int ref=0;
        if(k==1){
            for(int i=1;i<=n;i++)res.push_back(i);
            return res;
        }
        k++;
        
        for(int i=1;i<=n/2;i++){
            res.push_back(i);
            if(--k==1){
            // break;ref++;
            for(int j=i+1;j<=n-1;j++){
                res.push_back(j);
            }
                return res;
            }
                res.push_back(n-i+1);
            if(--k==1){
                // break;ref++;
            for(int j=n-i;j>i;j--){
                res.push_back(j);
            }
                return res;
            }
        }
return res;        
    }
};
