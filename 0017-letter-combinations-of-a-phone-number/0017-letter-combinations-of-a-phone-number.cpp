class Solution {
public:
    
    vector<string>offset={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    vector<string>ans;
    
    void backtrack(int idx,string s,string digits){
        if(idx>=digits.size()){
            ans.push_back(s);
            return ;
        }
        
        // for(int i=idx;i<digits.size();i++){
            for(char j:offset[digits[idx]-'0']){
                s+=j;
                backtrack(idx+1,s,digits);
                s.pop_back();
            }
        // }
        
    }
    
    
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return {};
        backtrack(0,"",digits);
        return ans;
    }
};