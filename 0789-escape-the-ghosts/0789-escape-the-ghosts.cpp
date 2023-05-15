class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int mydist=abs(target[0])+abs(target[1]);
        for(auto &i:ghosts){
            if(mydist>=abs(i[0]-target[0])+abs(i[1]-target[1]))return false;
        }
        return true;
    }
};