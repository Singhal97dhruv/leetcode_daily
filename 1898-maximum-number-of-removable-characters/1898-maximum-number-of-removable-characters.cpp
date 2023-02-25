class Solution {
public:
    bool feasible(string &s,string &p,vector<int>&r,int mid){
        int arr[100000];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<mid;i++)arr[r[i]]=1;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(arr[i]==1)continue;
            if(s[i]==p[j])j++;
        }
        if(j>=p.size())return true;
        return false;
    }
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int left=0,right=removable.size();
        while(left<=right){
            int mid=left+(right-left)/2;
            if(feasible(s,p,removable,mid))left=mid+1;
            else right=mid-1;
        }
        return right;
    }
};