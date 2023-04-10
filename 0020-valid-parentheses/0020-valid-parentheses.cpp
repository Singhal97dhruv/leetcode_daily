class Solution {
public:
    bool isValid(string s) {
     
        unordered_map<char,char>map;
        stack<char>tuf;
        map['}']='{';
        map[']']='[';
        map[')']='(';
        for(char c:s){
            if(c=='('||c=='{'||c=='['){
                tuf.push(c);
            }
            else{
                if(!tuf.empty() &&tuf.top()==map[c])
                    tuf.pop();
                else{
                    return false;
                }
            }
        }
        if(tuf.empty())return true;
        return false;
    }
};