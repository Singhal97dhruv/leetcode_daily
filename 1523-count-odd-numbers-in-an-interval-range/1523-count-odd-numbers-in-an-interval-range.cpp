class Solution {
public:
    int countOdds(int low, int high) {
        long long i=(high-low)/2;
        if(low%2==0 && high%2==0)return i;
        return i+1;
    }
};