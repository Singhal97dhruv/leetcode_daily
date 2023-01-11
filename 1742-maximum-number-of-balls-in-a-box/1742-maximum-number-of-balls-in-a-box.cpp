class Solution {
public:
    
    int digitSum(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    
    int countBalls(int lowLimit, int highLimit) {
        int cnt=0;
        unordered_map<int,int>map;
        for(int i=lowLimit;i<=highLimit;i++){
            int num=digitSum(i);
            map[num]++;
            cnt=max(cnt,map[num]);
        }
        return cnt;
    }
};