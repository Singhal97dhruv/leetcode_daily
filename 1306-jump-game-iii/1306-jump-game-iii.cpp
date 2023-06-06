class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        
        vector<bool>seen(arr.size(),false);
        
        queue<int>q;
        q.push(start);
        // if(arr[start]==0)return true;
        while(!q.empty()){
           
            int top=q.front();
            q.pop();
            
            if(seen[top])continue;
            seen[top]=true;
            if(arr[top]==0)return true;
            
             int rightIdx=top+arr[top];
            if(rightIdx<arr.size())q.push(rightIdx);
            
            int leftIdx=top-arr[top];
            if(leftIdx>=0)q.push(leftIdx);

        }
        
        return false;
        
    }
};