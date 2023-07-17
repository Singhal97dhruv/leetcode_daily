class Solution {
public:
    
//     void dfs(vector<vector<int>>&image,int ii,int jj,int color,int ijcolor){
//         if(ii<0 || ii>=image.size() || jj<0 || jj>=image[0].size() || image[ii][jj]==color || image[ii][jj]!=ijcolor)return;
        
//         image[ii][jj]=color;
//         dfs(image,ii+1,jj,color,ijcolor);
//         dfs(image,ii,jj+1,color,ijcolor);
//         dfs(image,ii,jj-1,color,ijcolor);
//         dfs(image,ii-1,jj,color,ijcolor);

//     }
    
//     vector<int>offset{0,1,0,-1,0};
//     void dfs(vector<vector<int>>&img,int i,int j,int color,int colToSet){
//         if(i<0 || j<0 || i>=img.size() || j>=img[0].size() || img[i][j]==colToSet || img[i][j]!=color)return ;
        
//         img[i][j]=colToSet;
//         for(int k=0;k<4;k++){
//             dfs(img,i+offset[k],j+offset[k+1],color,colToSet);
//         }
        
        
//     }
    
    
    vector<int>offset{0,1,0,-1,0};
    void fillMat(int i,int j,vector<vector<int>>&img,int col,int toBeChange){
        if(i<0 || j<0 || i>=img.size() || j>=img[0].size() || img[i][j]==col || img[i][j]!=toBeChange)return;
        img[i][j]=col;
        for(int k=0;k<4;k++){
            fillMat(i+offset[k],j+offset[k+1],img,col,toBeChange);
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        // dfs(image,sr,sc,color,image[sr][sc]);
        // return image;
        
        // dfs(image,sr,sc,image[sr][sc],color);
        
        fillMat(sr,sc,image,color,image[sr][sc]);
        
        return image;
    }
};