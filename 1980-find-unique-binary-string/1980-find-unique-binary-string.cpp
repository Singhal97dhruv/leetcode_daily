class Solution {
public:
//     void unique(string curr,int n,int idx,unordered_set<string>&set,string &ans){
        
//         if(idx==n){
//             if(set.find(curr)==set.end())ans=curr;
//             return;
//         }
//         if(ans=="")
//         unique(curr+"0",n,idx+1,set,ans);
//         if(ans=="")
//         unique(curr+"1",n,idx+1,set,ans);

        
//     }
    
    string findDifferentBinaryString(vector<string>& nums) {
        // unordered_set<string>set;
        // string ans="";
        // for(auto st:nums){
        //     set.insert(st);
        // }
        // unique("",nums.size(),0,set,ans);
        // return ans;
        
        string ans=nums[0];
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[i][i]=='0'?'1':'0';
        }
        return ans;
        
    }
};