class Solution {
public:
    vector<string>ans;
    void recur(string s,vector<string>& dict,int idx,string res){
        if(idx==s.size())
            ans.push_back(res.substr(0,res.size()-1));
        int n=s.size();
        
        for(string str:dict){
            if(idx+str.size()<=n && s.substr(idx,str.size())==str){
                 recur(s,dict,idx+str.size(),res+str+" ");
            }
        }
        return ;
    }
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        recur(s,wordDict,0,"");
        return ans;
    }
};