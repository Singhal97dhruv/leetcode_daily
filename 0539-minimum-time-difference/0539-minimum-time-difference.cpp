class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int mnMins=INT_MAX,n=timePoints.size();
        sort(timePoints.begin(),timePoints.end());
        for(int i=0;i<n;i++){
            int mins=abs(findDiff(timePoints[(i-1+n)%n],timePoints[i]));
            int minDiff=min(mins,1440-mins);
            mnMins=min(minDiff,mnMins);
        }
        return mnMins;
    }
    int findDiff(string s1,string s2){
        int h1=stoi(s1.substr(0,2));
        int h2=stoi(s2.substr(0,2));
        int m1=stoi(s1.substr(3,2));
        int m2=stoi(s2.substr(3,2));
        return (h2-h1)*60 + (m2-m1);
    }
    
};