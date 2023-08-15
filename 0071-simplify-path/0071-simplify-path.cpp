class Solution {
public:
    string simplifyPath(string path) {
        
        stack<string>stk;
        string s;
       
        for(int i=0;i<path.size();i++){
            if(path[i]=='/')continue;
            
            string temp="";
            
            while(i<path.size() && path[i]!='/'){
                temp+=path[i++];
                
            }
            
            if(temp==".")continue;
            else if(temp==".."){
                if(!stk.empty())
                stk.pop();
            }
            else{
                stk.push(temp);
            }
            
        }
        while(!stk.empty()){
            s="/"+stk.top()+s;
            stk.pop();
        }
        if(s=="")return "/";
        return s;
        
    }
};