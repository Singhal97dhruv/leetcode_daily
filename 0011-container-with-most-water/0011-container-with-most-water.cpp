class Solution {
public:
    int maxArea(vector<int>& height) {
        
//         int n=height.size(),high=0,res=0;
//         for(int i=0;i<n-1;i++){
//             int key=height[i];
//             for(int j=i+1;j<n;j++){
//                 if(key<=height[j]){
//                     int mul=key*(j-i);
//                     high=max(high,mul);
//                 }
//                 else{
//                     int mul=height[j]*(j-i);
//                      high=max(high,mul);
//                 }
//             }
//             res=max(res,high);
            
            
            
//         }
//         return res;
//         int r=height.size()-1;
//         int front=0,res=0;
// while(front<r){
//         int mul=(r-front)*min(height[front],height[r]);
//             res=max(res,mul);
//     if(height[front]<height[r])front++;
//     else r--;
//         }
//         return res;

//         int l=0,r=height.size()-1;
//         int res=0;
//         while(l<r){
//             res=max(res,(r-l)*min(height[l],height[r]));
//             if(height[l]<height[r])l++;
//             else r--;
//         }
//         return res;
        
//         int l=0,r=height.size()-1,res=0;
//         while(l<r){
//             res=max(res,min(height[l],height[r])*(r-l));
//             if(height[l]<height[r])l++;
//             else r--;
//         }
        
//         return res;
        int left=0,right=height.size()-1,res=-1;
        while(left<right){
            res=max(res,min(height[left],height[right])*(right-left));
            if(height[left]<height[right])left++;
            else right--;
        }
        return res;
    }
};