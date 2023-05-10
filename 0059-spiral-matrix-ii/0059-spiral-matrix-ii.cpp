class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
//         int i=0,j=0,fin1=n,fin2=n,init1=1,init2=0;
//         int temp=n*n;
//         vector<vector<int>>vect(n,vector<int>(n,0));
//         int choice=1,count=0;
//         while(temp>0){
            
//             for(j=init2;j<fin2 && choice==1;j++){
//                 vect[i][j]=++count;temp--;
//             }choice=2;fin2--;j--;
//             for(i=init1;i<fin1 && choice==2;i++){
//                 vect[i][j]=++count;temp--;
//             }choice=3;fin1--,i--;
//             for(j=fin2-1;j>=init2&&choice==3;j--){
//                 vect[i][j]=++count;temp--;
//             }choice=4,init2++,j++;
//             for(i=fin1-1;i>=init1 && choice==4;i--){
//                 vect[i][j]=++count;temp--;
//             }init1++;choice=1,i++;
            
            
            
//         }
        
//         return vect;
        
        vector<vector<int>>res(n,vector<int>(n,0));
        int top=0,left=0,bottom=n-1,right=n-1;
        
        int dirn=1,num=1;
        while(num<=n*n){
            if(dirn==1){
                for(int i=left;i<=right;i++){
                    res[top][i]=num++;
                }
                dirn=(dirn+1)%4;
                top++;
            }
            if(dirn==2){
                for(int i=top;i<=bottom;i++){
                    res[i][right]=num++;
                }
                right--;
                dirn=(dirn+1)%4;

            }
            if(dirn==3){
                for(int i=right;i>=left;i--){
                    res[bottom][i]=num++;
                }
                bottom--;
                dirn=(dirn+1)%4;
                
            }
            if(dirn==0){
                for(int i=bottom;i>=top;i--){
                    res[i][left]=num++;
                }
                left++;
                dirn=(dirn+1)%4;
                
            }
        }
        
        return res;
        
    }
};