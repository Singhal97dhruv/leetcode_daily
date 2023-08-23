class Solution {
public:
    // vector<vector<int>>result;
    // vector<int>md;
    // void combu(int n,int k,int j){
    //     if(k==0){
    //         result.push_back(md);
    //         return ;
    //     }
    //     for(int i=j;i>=1;i--){
    //         md.push_back(i);
    //         combu(n,k-1,i-1);
    //         md.pop_back();
    //     }
    // }
    
    vector<vector<int>>res;
    
//     void recur(vector<int>&temp,int st,int k,int n){
//         if(k==0){
            
//             res.push_back(temp);
//             return;
//         }
        
//         for(int i=st;i<=n;i++){
//             temp.push_back(i);
//             recur(temp,i+1,k-1,n);
//             temp.pop_back();
//         }
        
//     }
    
    void recur(int n,vector<int>&temp,int k){
        if(k==0){
            res.push_back(temp);
            return;
        }
        if(n==0){
            return;
        }
        
        for(int i=n;i>0;i--){
            temp.push_back(i);
            recur(i-1,temp,k-1);
            temp.pop_back();
        }
        
    }
    
    
    
    
    vector<vector<int>> combine(int n, int k) {
        // combu(n,k,n);
        // return result;
        
        // vector<int>temp;
        // recur(temp,1,k,n);
        // return res;
        
        
        vector<int>temp;
        recur(n,temp,k);
        return res;
        
    }
};