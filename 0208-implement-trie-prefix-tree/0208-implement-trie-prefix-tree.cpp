class Trie {
    vector<Trie*>children;
    bool isEnd;
public:
    Trie():isEnd(false) {
        children=vector<Trie*>(26,NULL);
    }
    
    void insert(string word) {
        Trie*t=this;
        for(char c:word){
            if(t->children[c-'a']==NULL)t->children[c-'a']=new Trie();
            t=t->children[c-'a'];
        }
        t->isEnd=true;
        
    }
    
    bool search(string word) {
        Trie*t=this;
        for(char c:word){
            if(t->children[c-'a']==nullptr)return false;
            t=t->children[c-'a'];
        }
        return t && t->isEnd;
    }
    
    bool startsWith(string prefix) {
         Trie*t=this;
        for(char c:prefix){
            if(t->children[c-'a']==nullptr)return false;
            t=t->children[c-'a'];
        }
        return t;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */