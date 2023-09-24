class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        
        vector<int>res;
        for(int i=0;i<arr.size();i++){
            auto p=max_element(arr.begin(),arr.end()-i);
            res.push_back(p-arr.begin()+1);
            res.push_back(arr.size()-i);
            reverse(arr.begin(),p+1);
            reverse(arr.begin(),arr.end()-i);
            
        }
        return res;
    } 
};