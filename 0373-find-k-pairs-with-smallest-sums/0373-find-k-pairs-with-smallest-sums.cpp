class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
//         int m=nums1.size(),n=nums2.size();
//         priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
//         vector<vector<int>>res;
//         if(m==0|| n==0)return res;
//         for(int i=0;i<m;i++){
//             pq.push({nums1[i]+nums2[0],{i,0}});
//         }
//         while(!pq.empty() && k-->0){
//             int i=pq.top().second.first,j=pq.top().second.second;
//             vector<int>temp={nums1[i],nums2[j]};
//             res.push_back(temp);
//             pq.pop();
//             if(j+1==n)continue;
//             pq.push({nums1[i]+nums2[j+1],{i,j+1}});
            
//         }
//         return res;
        
        int m=nums1.size(),n=nums2.size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        vector<vector<int>>ans;
        for(int i=0;i<nums1.size();i++){
            pq.push({nums1[i]+nums2[0],{i,0}});
        }
        while(!pq.empty() && k-->0){
            int a1=pq.top().second.first;
            int b1=pq.top().second.second;
            pq.pop();
            vector<int>temp={nums1[a1],nums2[b1]};
            ans.push_back(temp);
            if(b1>=n-1)continue;
            pq.push({nums1[a1]+nums2[b1+1],{a1,b1+1}});
        }
        return ans;
        
        
        
        
        
    }
};