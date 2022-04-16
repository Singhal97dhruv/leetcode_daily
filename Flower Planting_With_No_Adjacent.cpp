You have n gardens, labeled from 1 to n, and an array paths where paths[i] = [xi, yi] describes a bidirectional path between garden xi to garden yi. In each garden, you want to plant one of 4 types of flowers.

All gardens have at most 3 paths coming into or leaving it.

Your task is to choose a flower type for each garden such that, for any two gardens connected by a path, they have different types of flowers.

Return any such a choice as an array answer, where answer[i] is the type of flower planted in the (i+1)th garden. The flower types are denoted 1, 2, 3, or 4. It is guaranteed an answer exists.

 
  class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        
        vector<vector<int>>temp(n);
        vector<int>res(n);
        for(vector<int>p: paths){
            temp[p[1]-1].push_back(p[0]-1);
            temp[p[0]-1].push_back(p[1]-1);
        }
        for(int i=0;i<n;i++){
            int colors[5]={};
            for(int j:temp[i])
                colors[res[j]]=1;
            for(int c=4;c>=1;c--){
                if(!colors[c])
                    res[i]=c;
            }
        }
        return res;
        
    }
};
