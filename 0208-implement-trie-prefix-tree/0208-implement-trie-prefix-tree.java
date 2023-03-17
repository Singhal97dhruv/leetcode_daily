class Trie {
    public Trie[] children;
    boolean isEnd;
    public Trie() {
        children=new Trie[26];
        isEnd=false;
    }
    
    public void insert(String word) {
        Trie t=this;
        for(char c:word.toCharArray()){
            if(t.children[c-'a']==null)t.children[c-'a']=new Trie();
            t=t.children[c-'a'];
        }
        t.isEnd=true;
    }
    
    public boolean search(String word) {
        Trie t=this;
        for(char c:word.toCharArray()){
            if(t.children[c-'a']==null)return false;
            t=t.children[c-'a'];
        }
        return t!=null && t.isEnd==true;
    }
    
    public boolean startsWith(String prefix) {
        Trie t=this;
        for(char c:prefix.toCharArray()){
            if(t.children[c-'a']==null)return false;
            t=t.children[c-'a'];
        }
        return t!=null;
    }
}

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * boolean param_2 = obj.search(word);
 * boolean param_3 = obj.startsWith(prefix);
 */