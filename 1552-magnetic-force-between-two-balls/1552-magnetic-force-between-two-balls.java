class Solution {
public:
    bool isfeasible(vector<int>&pos,int mid,int m){
        int place=1,curr=pos[0];
        for(int i=1;i<pos.size();i++){
            if(pos[i]-curr>mid){
                curr=pos[i];
                place++;
            }
        }
        return place>=m;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int left=0,right=position.back()-position.front();
        while(left<right){
            int mid=left+(right-left)/2;
            if(isfeasible(position,mid,m))left=mid+1;
            else right=mid;
        }
        return left;
    }
};