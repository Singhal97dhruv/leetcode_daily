class Solution {
public:
    
    class TrieNode{
        public:
        bool isEnd;
        vector<TrieNode*>children;
        TrieNode(){
            children=vector<TrieNode*>(26,NULL);
            isEnd=false;
        }
    };
    
        
    
  
    class Trie{
        TrieNode*root;
        public:
            TrieNode*getRoot(){
                return root;
            }
            Trie(vector<string>&words){
                root=new TrieNode();
                for(int i=0;i<words.size();i++){
                    addWord(words[i]);
                }
            }
            void addWord(string &word){
                
                TrieNode*curr=root;
                for(int i=0;i<word.size();i++){
                    if(curr->children[word[i]-'a']==NULL)curr->children[word[i]-'a']=new TrieNode();
                    curr=curr->children[word[i]-'a'];
                }
                curr->isEnd=true;
            }
        
        
    };
    
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie*trie=new Trie(words);
        TrieNode*t=trie->getRoot();
        set<string>res;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                find(board,i,j,t,"",res);
            }
        }
        vector<string>result;
        for(auto it:res)result.push_back(it);
        return result;
    }
    
    
    void find(vector<vector<char>>& board,int x,int y,TrieNode*root,string word,set<string>&res)
    {
        if(x<0 || y<0 || x>=board.size() || y>=board[0].size() || board[x][y]==' ')return;
    
    
    if(root->children[board[x][y]-'a']!=NULL){
        word=word+board[x][y];
        root=root->children[board[x][y]-'a'];
        // if(root->isEnd)res.insert(word);
        if(root->isEnd){
            res.insert(word);
            root->isEnd = false;
            }
        char c=board[x][y];
        board[x][y]=' ';
        find(board,x+1,y,root,word,res);
        find(board,x,y+1,root,word,res);
        find(board,x-1,y,root,word,res);
        find(board,x,y-1,root,word,res);
        board[x][y]=c;
    }
    
    
    
} 
};