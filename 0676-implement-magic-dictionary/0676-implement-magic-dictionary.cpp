class MagicDictionary {
public:
        
    class Trie{
        public:
        bool isEnd;
        vector<Trie*>children;
        Trie(){
            isEnd=false;
            children=vector<Trie*>(26,NULL);
        }
    };
    
    Trie*root=new Trie();
    
    void addWord(string word){
        Trie*t=root;
        for(char c:word){
            if(!t->children[c-'a'])
                t->children[c-'a']=new Trie();
            
            t=t->children[c-'a'];
        }
        t->isEnd=true;
    }
    bool helper(string word){
        Trie*t=root;
        
        for(char c:word){
            if(!t->children[c-'a'])return false;
            t=t->children[c-'a'];
        }
        return t->isEnd;
    }
    
    MagicDictionary() {
        
    }
    
    void buildDict(vector<string> dictionary) {
        for(string s:dictionary)addWord(s);
    }
    
    bool search(string searchWord) {
        
        string word=searchWord;
        for(int i=0;i<word.size();i++){
            
            for(int j=0;j<26;j++){
                if(j+'a'==searchWord[i])continue;
                word[i]=j+'a';
                if(helper(word))return true;
            }
            word[i]=searchWord[i];
        }
        return false;
    }
    
    
    
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */