class WordDictionary {
    public WordDictionary[] children;
    boolean isEndofWord;
    public WordDictionary() {
        children=new WordDictionary[26];
        isEndofWord=false;
    }
    
    public void addWord(String word) {
        WordDictionary t=this;
        for(char c:word.toCharArray()){
            if(t.children[c-'a']==null)t.children[c-'a']=new WordDictionary();
            t=t.children[c-'a'];
        }
        t.isEndofWord=true;
    }
    
    public boolean search(String word) {
        WordDictionary t=this;
       for(int i=0;i<word.length();i++){
           char c=word.charAt(i);
           if(c=='.'){
               for(WordDictionary ch:t.children){
                   if(ch!=null && ch.search(word.substring(i+1)))return true;
               } return false;
               
           }
           if(t.children[c-'a']==null)return false;
           t=t.children[c-'a'];
       }
        return t!=null && t.isEndofWord;
    }
}

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary();
 * obj.addWord(word);
 * boolean param_2 = obj.search(word);
 */