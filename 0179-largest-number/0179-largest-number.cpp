class Solution {
public:
    
    string largestNumber(vector<int>& nums) {
        
        vector<string>temp;
        for(int i:nums){
            temp.push_back(to_string(i));
        }
        sort(temp.begin(),temp.end(),[](string x,string y){ return x+y>y+x;});
        
        
        string res="";
        if(temp[0]=="0")return "0";
        for(string s: temp)
            res+=s;

        return res;
    }
};