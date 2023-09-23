class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        
        vector<string>ans;
        unordered_map<string,int>map;
        
        for(string s:cpdomains){
            
            stringstream ss(s);
            string temp;
            ss>>temp;
            int reps=stoi(temp);
            
            ss>>temp;
            string tt;
            for(int i=temp.size()-1;i>=0;i--){
                if(temp[i]=='.'){
                    map[tt]+=reps;
                }
                tt=temp[i]+tt;                
            }
            map[tt]+=reps;
            
        }
        
        for(auto m:map){
            ans.push_back(to_string(m.second)+" "+m.first);
        }
        return ans;
        
    }
};