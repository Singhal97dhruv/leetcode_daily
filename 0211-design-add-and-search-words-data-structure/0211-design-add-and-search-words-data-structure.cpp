class WordDictionary {
    
    vector<WordDictionary*>children;
    bool isEnd;
    
public:
    WordDictionary() {
        isEnd=false;
        children=vector<WordDictionary*>(26,NULL);
    }
    
    void addWord(string word) {
        WordDictionary *t=this;
        for(char c:word){
            if(t->children[c-'a']==NULL)t->children[c-'a']=new WordDictionary();
            t=t->children[c-'a'];
        }
        t->isEnd=true;
    }
    
    bool search(string word) {
        WordDictionary *t=this;
        
        for(int i=0;i<word.size();i++){
            
            if(word[i]=='.'){
                for(auto ch:t->children){
                    if(ch && ch->search(word.substr(i+1)))return true;}
                    return false;
            }
            else{
                if(t->children[word[i]-'a']==NULL)return false;
                t=t->children[word[i]-'a'];
            }
            
        }
        
        return t && t->isEnd;
        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */