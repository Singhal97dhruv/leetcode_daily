class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
     long revNum=0;
        int temp=x;
        while(temp){
            revNum=revNum*10+temp%10;
            temp/=10;
        }
        return revNum==x;
    }
};