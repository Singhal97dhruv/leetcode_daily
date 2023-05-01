class Solution {
public:
    double average(vector<int>& salary) {
        int mn=*min_element(salary.begin(),salary.end());
        int mx=*max_element(salary.begin(),salary.end());
        double res=0.0;
        for(int i:salary)res+=i;
        
        return (res-mn-mx)/(salary.size()-2);
        
    }
};