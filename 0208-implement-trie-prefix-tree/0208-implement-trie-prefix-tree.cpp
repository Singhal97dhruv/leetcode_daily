class Trie {
    vector<Trie*>children;
    bool isEnd;
public:
    
    
    Trie() {
        isEnd=false;
        children= vector<Trie*>(26,NULL);
    }
    
    void insert(string word) {
        Trie *curr= this;
        for(char c:word){
            if(curr->children[c-'a']==NULL)curr->children[c-'a']=new Trie();
            curr= curr->children[c-'a'];
        }
        curr->isEnd=true;
    }
    
    bool search(string word) {
        Trie*curr=this;
        for(char c:word){
            if(curr->children[c-'a']==NULL)return false;
            curr=curr->children[c-'a'];
        }
        return curr && curr->isEnd;
    }
    
    bool startsWith(string prefix) {
        Trie*curr=this;
        for(char c:prefix){
            if(curr->children[c-'a']==NULL)return false;
            curr=curr->children[c-'a'];
        }
        return curr;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */