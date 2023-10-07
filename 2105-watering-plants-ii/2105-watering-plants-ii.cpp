class Solution {
public:
    int minimumRefill(vector<int>& plants, int capA, int capB) {
     
        int cnt=0;
        int i=0,j=plants.size()-1;
        int cA=capA,cB=capB;
        while(i<j){
            
            if(cA<plants[i]){
                cnt++;
                cA=capA-plants[i];
            }
            else cA-=plants[i];
            if(cB<plants[j]){
                cnt++;
                cB=capB-plants[j];
            }
            else cB-=plants[j];
            i++,j--;
            
        }
        if(i==j){
            if(cA>=plants[i] || cB>=plants[i])return cnt;
            else cnt++;
        }
        return cnt;
    }
};