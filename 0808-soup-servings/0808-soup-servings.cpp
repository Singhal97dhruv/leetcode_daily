class Solution {
public:
    
    vector<vector<double>>offset={{100,0},{75,25},{50,50},{25,75}};
    unordered_map<int,unordered_map<int,double>>map;
    double recur(double i,double j){
        
        if(i<=0 && j>0)return 1;
        else if(i<=0 && j<=0)return 0.5;
        else if(j<=0)return 0;
        if(map[i][j]!=0)return map[i][j];
        double res=0;
        
        for(int k=0;k<4;k++){
            res+=recur(i-offset[k][0],j-offset[k][1]);
        }
        return map[i][j]= 0.25*res;
        
    }
    
    
    double soupServings(int n) {
        if(n>=4800)return 1;
        return recur(n,n);
        
    }
};