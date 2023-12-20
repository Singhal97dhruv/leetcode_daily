class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int f=INT_MAX,s=INT_MAX;
        for(int i:prices){
            if(i<f){
                s=f;
                f=i;
            }
            else {
                s=min(s,i);
            }
        }
        
        if(money>=f+s)return money-s-f;
        return money;
        
    }
};