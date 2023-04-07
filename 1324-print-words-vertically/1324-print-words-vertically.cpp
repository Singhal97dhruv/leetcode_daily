class Solution {
public:
    vector<string> printVertically(string s) {
        
        vector<string>vect;
        vect.push_back({});
        int row=0,col=0;
        
        for(char c:s){
            
            if(c==' '){
                row=0,col++;
                continue;
            }
            
            if(row>=vect.size()){
                vect.push_back({});
            }
            if(col>vect[row].size()){
                vect[row].append(string(col-vect[row].size(),' '));
            }
            vect[row++].push_back(c);
            
        }
        return vect;
        
    }
};