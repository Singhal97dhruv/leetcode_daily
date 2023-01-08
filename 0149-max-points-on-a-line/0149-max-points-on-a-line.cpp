class Solution {
public:
    int maxPoints(vector<vector<int>>& pt) {
        int ans=1;
        int n=pt.size();
        for(int i=0;i<n;i++){
            map<double,int>map;
            for(int j=i+1;j<n;j++){
                double x=(double)(pt[j][1]-pt[i][1])/(double)(pt[j][0]-pt[i][0]);
                if(pt[j][1]-pt[i][1]<0 && (pt[j][0]-pt[i][0])==0)
                                  map[abs(x)]++;
                                  else 
                                  map[x]++;
            }
                                  int temp=0;
                                  for(auto it:map)
                                      temp=max(temp,it.second+1);
                                ans=max(temp,ans);
                                  
        }
                                  return ans;
    }
};