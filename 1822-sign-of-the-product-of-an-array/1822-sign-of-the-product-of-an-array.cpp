class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negNos=0;
        for(int i:nums)
            if(i==0)return 0;
            else if(i<0)negNos++;
        return negNos%2!=0?-1:1;
    }
};