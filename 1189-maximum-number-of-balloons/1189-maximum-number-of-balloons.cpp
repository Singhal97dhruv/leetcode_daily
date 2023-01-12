class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int cntOdd=INT_MAX,cntEven=INT_MAX;
        unordered_map<char,int>map;
        for(char c:text){
            map[c]++;
        }
        cntOdd=min(cntOdd,map['b']);
        cntOdd=min(cntOdd,map['a']);
        cntOdd=min(cntOdd,map['n']);
        
        cntEven=min(cntEven,map['o']);
        cntEven=min(cntEven,map['l']);
        
        return min(cntOdd,cntEven/2);
        
    }
};