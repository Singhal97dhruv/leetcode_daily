class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int len=word.length();

        
        
        if(word[0]<65 || word[0]>90){
            for(int i=1;i<len;i++){
                if(word[i]>=65 && word[i]<=90){
                    return false;
                }
            }
            return true;
        }
        else{
            if(len>1 && (word[1]<65 || word[1]>90))
            {
                 for(int i=1;i<len;i++){
                if(word[i]>=65 && word[i]<=90){
                    return false;
                }
            }
                return true;
            }
        else{
                for(int i=1;i<len;i++){
                if(word[i]<65 || word[i]>90){
                    return false;
                }    
                    
                }   
            return true;
        
        }
        
        
    }
    }
};