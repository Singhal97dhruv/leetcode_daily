class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        // vector<int>res;
        // int i=0,r=numbers.size()-1;
        // while(i<r){
        //     if(numbers[i]+numbers[r]==target){
        //         res.push_back(i+1);
        //         res.push_back(r+1);
        //         break;
        //     }
        //     else if(numbers[i]+numbers[r]>target)r--;
        //     else i++;
        // }
        // return res;
        
        
        int left=0,right=numbers.size()-1;
        while(left<right){
            if(numbers[left]+numbers[right]>target){
                right--;
            }
            else if(numbers[left]+numbers[right]<target)left++;
            else return {left+1,right+1};
        }
        return{};
    }
};