class Solution {
public:
    
    string helper(int n,char c){
        string s="";
        for(int i=0;i<n;i++)s+=c;
        return s;
    }
    
    string alphabetBoardPath(string target) {
     
        char alpha='a';
        bool zFlag=false;
        string res="";
        for(char c:target){
            if(c=='z'){
                zFlag=true;
            }
            else 
                zFlag=false;
            
            int t_row=(alpha-97)/5;
            int t_col=(alpha-97)%5;
        
            int p_row=(c-97)/5;
            int p_col=(c-97)%5;
            
            int nr=p_row-t_row;
            int nc=p_col-t_col;
            
            if(!nr && !nc){
                res+='!';continue;
            }
            
            if(nr<0){
                res+=helper(abs(nr),'U');
            }
            if(nr>0){
                res+=helper(abs(nr),'D');
            }
            
            if(zFlag){
                res.pop_back();
            }
            
            if(nc<0){
                res+=helper(abs(nc),'L');
            }
            if(nc>0){
                res+=helper(abs(nc),'R');
            }
            if(zFlag){
                zFlag=!zFlag;
                res+='D';
            }
            
            alpha=c;
            res+='!';
            
            
        }
        
        return res;
    }
};