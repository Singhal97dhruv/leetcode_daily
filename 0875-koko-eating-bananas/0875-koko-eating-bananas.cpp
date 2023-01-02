class Solution {
public:
    
    bool feasible(const vector<int>& piles,int speed,int hours){
        int h=0;
        for(int i:piles){
            int div=i/speed;
            h+=div;
            if(i%speed!=0)h++;
        }
        return h<=hours;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int left=1,right=*max_element(piles.begin(),piles.end());
        while(left<right){
            int mid=left+(right-left)/2;
            if(feasible(piles,mid,h))
                right=mid;
            else left=mid+1;
        }
        return left;
        
        
//      int left=1;
//         int mid;
//         int right=1000000000;
//         while(left<=right){
//             mid=left+(right-left)/2;
//             if(can_possible(piles,mid,h)){
//                 right=mid-1;
                
//             }
//             else{
//                 left=mid+1;    
//             }
            
            
//         }
//         return left;
    }
//     bool can_possible(vector<int>&piles,int m,int h){
//         int hours=0;
//        for(int pile: piles){
//             int div=pile/m;
//             hours=hours+div;
//             if(pile%m!=0){
//                 hours++;
//             }
        
//         }
//         return hours<=h;
        
//     }
};