class Solution {
public:
    vector<vector<string>>res;
    bool isValid(int i,int j,vector<string>&temp){
        
        for(int x=0;x<i;x++)
            if(temp[x][j]=='Q')return false;
        for(int y=0;y<j;y++)
            if(temp[i][y]=='Q')return false;
        for(int x=i,y=j;x>=0 && y>=0;x--,y--)
            if(temp[x][y]=='Q')return false;
        for(int x=i,y=j;x>=0 && y<=temp.size();x--,y++)
            if(temp[x][y]=='Q')return false;
        
        return true;
    }
    
    void solve(int Row,vector<string>&temp){
        if(Row==temp.size()){
            res.push_back(temp);
            return;
        }
       
        for(int i=0;i<temp.size();i++){
            if(isValid(Row,i,temp)){
                temp[Row][i]='Q';
                solve(Row+1,temp);
                temp[Row][i]='.';
                
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string>temp(n,string(n,'.'));
        solve(0,temp);
        return res;
    }
};