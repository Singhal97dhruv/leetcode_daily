class Solution {
public:
    vector<int>vect;
    Solution(vector<int>& w) {
      for(int i:w){
        if(vect.empty())
            vect.push_back(i);
        else
            vect.push_back(vect.back()+i);
    
          }
    }
    int pickIndex() {
        int x=vect.back();
        int r=rand()%x;
        auto it=upper_bound(vect.begin(),vect.end(),r);
        return it-vect.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */