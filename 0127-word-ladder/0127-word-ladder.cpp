class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
//         unordered_set<string>dict(wordList.begin(),wordList.end());
//         queue<string>q;
//       int count=1;
//         q.push(beginWord);
//         while(!q.empty()){
//             int n=q.size();
//             for(int i=0;i<n;i++){
//             string word=q.front();
//             q.pop();
//             if(word==endWord){
//                 return count;
//             }
//             dict.erase(word);
//                 for(int i=0;i<word.size();i++){
//                     char c=word[i];
//                     for(int j=0;j<26;j++){
//                         word[i]='a'+j;
//                         if(dict.find(word)!=dict.end()){
                            
                            
//                             q.push(word);
//                             dict.erase(word);
//                         }
//                     }
//                     word[i]=c;
//                 }
//             }
//             count++;
            
        
//         }
//         return 0;
        
        unordered_set<string>dict(wordList.begin(),wordList.end());
        int cnt=1;
        queue<string>q;
        q.push(beginWord);
        while(!q.empty()){

            int n=q.size();
            for(int i=0;i<n;i++){
                string word=q.front();q.pop();
                if(word==endWord)return cnt;
                
                dict.erase(word);
               for(int i=0;i<word.size();i++){
                   char c=word[i];
                   for(int j=0;j<26;j++){
                       word[i]='a'+j;
                       if(dict.find(word)!=dict.end()){q.push(word);
                       dict.erase(word);
                       }
                   }
                   word[i]=c;
               }
                
                
            }
            cnt++;
            
        }
        
        return 0;
    }
};