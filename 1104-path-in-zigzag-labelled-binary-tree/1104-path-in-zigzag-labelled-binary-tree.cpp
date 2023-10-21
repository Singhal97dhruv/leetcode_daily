class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
     
        vector<int>ans;
        ans.push_back(label);
        int h=log2(label);
        while(h){
            int left=pow(2,h-1);
            int right=pow(2,h)-1;
            label=left+(right-label/2);
            ans.push_back(label);
            h--;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};