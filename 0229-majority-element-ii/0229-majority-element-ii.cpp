class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        // unordered_map<long long,long long>map;
        // int n=nums.size()/3;
        // vector<int>res;
        // for(auto i:nums){
        //     map[i]++;
        // }
        // for(auto i:map){
        //     if(i.second>n){
        //         res.push_back(i.first);
        //     }
        // }        
        // return res;
        
        int candidate1=0,candidate2=1,count1=0,count2=0;
                int n=nums.size()/3;
        vector<int>res;
        for(int i:nums){
            if(i==candidate1)count1++;
            else if(i==candidate2)count2++;
            else if(count1==0){
                candidate1=i,count1=1;
            }
            else if(count2==0){
                candidate2=i,count2=1;
            }
            else{
                count1--,count2--;
            }
        }
        int num1=0,num2=0;
        for(int i:nums){
            if(i==candidate1)num1++;
            else if(i==candidate2)num2++;
        }
        if(num1>n)res.push_back(candidate1);
                if(num2>n)res.push_back(candidate2);
        return res;

        
        
    }
};