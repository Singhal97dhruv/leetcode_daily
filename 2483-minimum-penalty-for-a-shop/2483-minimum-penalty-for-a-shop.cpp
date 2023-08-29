class Solution {
public:
    int bestClosingTime(string customers) {

        int n=customers.size()+1;
        
        int res=0,temp=INT_MAX;
        
        vector<int>no(n+1,0),yes(n+1,0);
        
        for(int i=1;i<=customers.size();i++){
            
            if(customers[i-1]=='N'){
                no[i]=no[i-1]+1;
            }
            else no[i]=no[i-1];
            
            if(customers[n-i-1]=='Y'){
                yes[n-i-1]=yes[n-i]+1;
            }
            else yes[n-i-1]=yes[n-i];
                
        }
        
        for(int i=0;i<n;i++){
            
            int t=yes[i]+no[i];
            if(t<temp){
                temp=t;
                res=i;
            }
            
        }
        return res;
        
    }
};