   class Trie{
       public:
        vector<Trie*>children;
        bool isEnd;
        Trie(){
            children= vector<Trie*>(26,NULL);
            isEnd=false;
        }
    };
class WordDictionary {
public:
    
    Trie*root= new Trie();
    
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        Trie*t=root;
        for(char c:word){
            if(t->children[c-'a'])t=t->children[c-'a'];
            else {
                t->children[c-'a']=new Trie();
                t=t->children[c-'a'];
            }
        }
        t->isEnd=true;
    }
    
    bool search(string word) {
//         Trie*t=root;
//         for(int i=0;i<word.size();i++){
//             if(word[i]=='.'){
//                 for(int j=0;j<26;j++){
//                     if(t->children[j] && search(word.substr(i+1)))return true;
//                 }
//             }
//             else if(t->children[word[i]-'a']){
//                 t=t->children[word[i]-'a'];
//             }
//         }
        
//         return t && t->isEnd==true;
        return searchHelper(root,word);
        
    }
    
    bool searchHelper(Trie*r,string word){
        Trie*t=r;
        for(int i=0;i<word.size();i++){
            if(word[i]=='.'){
                for(auto node: t->children){
                    if(node && searchHelper(node,word.substr(i+1)))return true;
                }
                return false;
            }
            else if(t->children[word[i]-'a']){
                t=t->children[word[i]-'a'];
            }
            else return false;
        }
        
        return t && t->isEnd==true;
    }
    
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */