class Solution {
public:
    /// 1st approach
    void recur(string T,string S,unordered_map<int,int>&map,unordered_set<string>& set){
        
        for(int i=0;i<T.size();i++){
            
            if(map[i]==0){
                S+=T[i];
            
                set.insert(S);
                map[i]=1;
                recur(T,S,map,set);
                map[i]=0;
                S.pop_back();
                
            }
            
        }
        
    }
    
    // 2nd Approach
    int dfs(vector<int>&arr){
        int sum=0;
        for(int i=0;i<26;i++){
            if(arr[i]==0)continue;
            sum++;
            arr[i]--;
            sum+=dfs(arr);
            arr[i]++;
        }
        return sum;
    }
    
    
    int numTilePossibilities(string tiles) {
        // unordered_map<int,int>map;
        // unordered_set<string>set;
        // recur(tiles,"",map,set);
        // return set.size();
        
        vector<int>arr(26,0);
        for(char c:tiles)arr[c-'A']++;
        return dfs(arr);
        
    }
};