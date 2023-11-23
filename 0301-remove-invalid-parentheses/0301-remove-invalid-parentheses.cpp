class Solution {
public:
    
    void recur(int idx,string s,int leftRemoved,int rightRemoved,int pair,string path,unordered_set<string>&res){
        
        if(idx>=s.size()){
            if(leftRemoved==0 && rightRemoved==0 && pair==0)res.insert(path);
        return ;
        }
        if(leftRemoved+rightRemoved>s.size()-idx)return;
        
        if(s[idx]!='(' && s[idx]!=')')
            recur(idx+1,s,leftRemoved,rightRemoved,pair,path+s[idx],res);
        else{
            if(s[idx]=='('){
                if(leftRemoved>0){
                    recur(idx+1,s,leftRemoved-1,rightRemoved,pair,path,res);
                }
                recur(idx+1,s,leftRemoved,rightRemoved,pair+1,path+s[idx],res);
            }
            else{
                if(rightRemoved>0){
                    recur(idx+1,s,leftRemoved,rightRemoved-1,pair,path,res);
                }
                if(pair>0)
                    recur(idx+1,s,leftRemoved,rightRemoved,pair-1,path + s[idx],res);
            }
        }
            
        
        
    }
    
    
    vector<string> removeInvalidParentheses(string s) {
        
        int leftRemoved=0,rightRemoved=0;
        unordered_set<string>res; 
        
        for(char c:s){
            if(c=='('){
                leftRemoved++;
            }
            if(c==')'){
                if(leftRemoved!=0)leftRemoved--;
                else rightRemoved++;
            }
        }
        
        recur(0,s,leftRemoved,rightRemoved,0,"",res);
        return vector<string>(res.begin(),res.end());
    }
};