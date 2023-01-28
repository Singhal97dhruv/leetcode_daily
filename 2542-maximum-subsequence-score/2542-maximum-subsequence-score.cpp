class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        long long sum=0,ans=0;
      vector<pair<int,int>>vect;
        for(int i=0;i<nums1.size();i++){
            vect.push_back({nums2[i],nums1[i]});
        }
        sort(vect.rbegin(),vect.rend());
        priority_queue<int>pq;
        for(int i=0;i<k-1;i++){
            sum+=vect[i].second;
            pq.push(-vect[i].second);
        }
        for(int i=k-1;i<nums1.size();i++){
            sum+=vect[i].second;
            pq.push(-vect[i].second);
            ans=max(ans,sum*vect[i].first);
            sum+=pq.top();
            pq.pop();
        }
        return ans;
    }
};