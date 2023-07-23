class Solution {
public:
//     const vector<string>pad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    vector<string>offset={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
//     vector<string>res;
    
//     void recur(string s,int st,string dig){
//         if(st==dig.size()){
//             res.push_back(s);
//             return;
//         }
//         int idx=dig[st]-'0';
//         int n=offset[idx].size();
        
//         for(int i=0;i<n;i++){
//             s+=offset[idx][i];
//             recur(s,st+1,dig);
//             s.pop_back();
//         }
        
        
//     }
    
    vector<string>res;
    
    void backtrack(int idx,string curr,string digits){
        if(idx>=digits.size()){
            res.push_back(curr);
            return ;
        }
        int offsetIdx=digits[idx]-'0';
        
        for(int i=0;i<offset[offsetIdx].size();i++){
            backtrack(idx+1,curr+offset[offsetIdx][i],digits);
        }
        
    }
    
    
    vector<string> letterCombinations(string digits) {
//         if(digits.empty())return {};
//         vector<string>result;
//         result.push_back("");
//         for(auto nums:digits){
//             vector<string>temp;
//             for(auto can:pad[nums-'0'])
//                 for(auto s:result)
//                     temp.push_back(s+can);
//         swap(result,temp);
//         }
        
//         return result;
        
        if(digits.size()==0)return {};
        // recur("",0,digits);
        
        backtrack(0,"",digits);
        return res;
        
    }
};