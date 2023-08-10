class Solution {
public:
    int trap(vector<int>& height) {
//         int size=height.size();
//         int a=0;
//         int h,j,temp,x,water=0,k;
//         while(a!=size-1){
//             if(height[a]>0){
//                 break;
//             }
//             a++;
//         }
//         k=a;
//         while(k!=size-1){
//             h=height[k];
//             int count=0;
//             for(j=k+1;j<size;j++){
//                 if(height[j]>=h){
//                     temp=j;
//                     break;
//                 }
//                 count++;
//             }
//         if(count==(size-1-(k+1))){
//             height[k]=height[k]-1;
//         }
//         else{
//         j=k+1;
//             while(count!=0){
//                 x=h-height[j];
//                 water+=x;
//                 count--;
//                 j++;
//             }
//             k=j;
//         }
            
            
//         }
//         return water;
        
        
        
//         int n=height.size();
//         vector<int>mxl(n),mxr(n);
//         mxl[0]=height[0];
//         mxr[n-1]=height[n-1];
//         for(int i=1;i<n;i++){
//             mxl[i]=max(mxl[i-1],height[i]);
//             cout<<mxl[i]<<" ";
//         }
//         for(int i=n-2;i>=0;i--){
//             mxr[i]=max(mxr[i+1],height[i]);
//         }
//         vector<int>water(n);
//         int sum=0;
//         for(int i=0;i<n;i++){
//             water[i] = min(mxl[i],mxr[i])-height[i];
//             // cout<<water[i];
//             sum+=water[i];
//         }
//         return sum;
        
        
//         int n=height.size();
//         vector<int>front(n,0),last(n,0);
//         for(int i=n-2;i>=0;i--){

//             last[i]=max(last[i+1],height[i+1]);
        
//         }
//         for(int i=1;i<n;i++){
//             front[i]=max(front[i-1],height[i-1]);
//         }
//         int cnt=0;
//         for(int i=0;i<n;i++){
//             int lev=min(last[i],front[i]);
//             if(lev>height[i])cnt+=lev-height[i];
//         }
//         return cnt;
        
//         int n=height.size();
//         vector<int>leftToRight(n,0),rightToLeft(n,0);
//         for(int i=1;i<n;i++){
//             leftToRight[i]=max(leftToRight[i-1],height[i-1]);
//         }
//         for(int i=n-2;i>=0;i--){
//             rightToLeft[i]=max(rightToLeft[i+1],height[i+1]);
//         }
       
//         int waterCollected=0;
        
//         for(int i=0;i<n;i++){
//             int level=min(leftToRight[i],rightToLeft[i]);
//             if(level>height[i])waterCollected+=level-height[i];
//         }
//         return waterCollected;
        
        int n=height.size();
        vector<int>LeftToR(n,0),RightToL(n,0);
        
        for(int i=1;i<n;i++){
            LeftToR[i]=max(LeftToR[i-1],height[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            RightToL[i]=max(RightToL[i+1],height[i+1]);
        }
        
        int WaterCollected=0;
        for(int i=0;i<n;i++){
            WaterCollected+=min(RightToL[i],LeftToR[i])>height[i]?min(RightToL[i],LeftToR[i])-height[i]:0;
        }
        return WaterCollected;
    }
};