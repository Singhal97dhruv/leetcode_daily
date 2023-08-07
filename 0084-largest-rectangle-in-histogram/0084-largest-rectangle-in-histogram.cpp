class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // int ans=INT_MIN,area_with_top=0,top=0,i=0,n=heights.size();
        // stack<int>s;
        // while(i<n){
        //     if(s.empty()||heights[s.top()]<=heights[i]){
        //         s.push(i++);
        //     }
        //     else{
        //         top=s.top();s.pop();
        //         area_with_top=heights[top]*(s.empty()?i:i-s.top()-1);
        //         ans=max(ans,area_with_top);
        //     }
        // }
        // while(!s.empty()){
        //     top=s.top();s.pop();
        //     area_with_top=heights[top]*(s.empty()?i:i-s.top()-1);
        //     ans=max(ans,area_with_top);
        // }
        // return ans;
        
        heights.push_back(0);
        int res=0;
        stack<int>stk;
        
        for(int i=0;i<heights.size();i++){
            while(!stk.empty() && heights[stk.top()]>heights[i]){
                int height=heights[stk.top()];stk.pop();
                int idx=stk.empty()?-1:stk.top();
                res=max(res,height*(i-idx-1));
            }
            stk.push(i);
        }
        return res;
        
    }
};