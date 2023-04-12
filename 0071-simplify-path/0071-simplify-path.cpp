class Solution {
public:
    string simplifyPath(string path) {
        
        vector<string>vect;
        string word,res;
        stringstream ss(path);
        while(getline(ss,word,'/')){
            if(word==""||word==".")continue;
            if(word==".."&&!vect.empty())vect.pop_back();
            else if(word!="..")vect.push_back(word);
        }
        for(auto temp:vect){
            res+="/"+temp;
        }
        if(!res.empty())return res;
        else return "/";
        
    }
};