class Solution {
public:
    int romanToInt(string s) {
//         unordered_map<char, int> T = { { 'I' , 1 },
//                                    { 'V' , 5 },
//                                    { 'X' , 10 },
//                                    { 'L' , 50 },
//                                    { 'C' , 100 },
//                                    { 'D' , 500 },
//                                    { 'M' , 1000 } };
                                   
//    int sum = T[s.back()];
//    for (int i = s.length() - 2; i >= 0; --i) 
//    {
//        if (T[s[i]] < T[s[i + 1]])
//        {
//            sum -= T[s[i]];
//        }
//        else
//        {
//            sum += T[s[i]];
//        }
//    }
   
//    return sum;
        
        // unordered_map<char,int>map={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        // int ans=map[s.back()];
        // for(int i=s.size()-2;i>=0;i--){
        //     if(map[s[i]]<map[s[i+1]]){
        //         ans-=map[s[i]];
        //     }
        //     else ans+=map[s[i]];
        // }
        // return ans;
        
        unordered_map<char,int>Roman={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int i=s.size(),ans=0;
        while(i-1>=0){
            if(Roman[s[i-1]]<Roman[s[i]]){
                ans+=Roman[s[i]]-Roman[s[i-1]];
                i-=2;
            }
            else{
                ans+=Roman[s[i--]];
            }
        }
        if(i==0)ans+=Roman[s[0]];
        return ans;
        
    }
};