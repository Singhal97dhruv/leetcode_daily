class Solution {
public:
    string sortVowels(string s) {
        priority_queue<char,vector<char>,greater<>>pq;
        
        for(int c=0;c<s.size();c++){
        
         if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
             pq.push(s[c]);
             
             
            }
        
        string t;
        
        
        for(int c=0;c<s.size();c++){
             if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U'){
                 t+=pq.top();pq.pop();
             }
            else{
                t+=s[c];
            }
                 
        }
             return t;
    }
};