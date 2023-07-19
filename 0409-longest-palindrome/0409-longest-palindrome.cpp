class Solution {
public:
    int longestPalindrome(string s) {
        
//         unordered_map<int,int>map;
//         for(char c:s){
//             map[c]++;
//         }
//         int occ=0,flag=0;
//         for(int i=65;i<=90;i++){
//             if(map[i]%2!=0 && map[i]>=3){
//                 occ+=map[i]-1;
//                 flag=1;
//             }
//             else if(map[i]%2==0)occ+=map[i];
//         else flag=1;
//         }
//         for(int i=97;i<=122;i++){
//              if(map[i]%2!=0 && map[i]>=3){
//                 occ+=map[i]-1;
//                 flag=1;
//             }
//             else if(map[i]%2==0)occ+=map[i];
//             else flag=1;
//         }
//         return occ+flag;
        
       
        unordered_map<char,int>map;
        for(char c:s)map[c]++;
        
        int length=0,flag=0;
        for(auto m:map){
            if(m.second%2==0)length+=m.second;
            else {
                flag=1;length+=m.second-1;
            }
        }
        return flag+length;
    }
};