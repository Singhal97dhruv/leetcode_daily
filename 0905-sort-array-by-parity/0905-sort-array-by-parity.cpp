class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>mylist;
        for (int i: nums){
            if(i%2==0){
                mylist.insert(mylist.begin(),i);
            }
            else mylist.push_back(i);
        }
        return mylist;
    }
};