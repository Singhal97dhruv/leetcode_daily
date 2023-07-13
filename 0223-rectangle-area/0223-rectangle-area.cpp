class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        
        // int x1=bx2-bx1,y1=by2-by1;
        // int x2=ax2-ax1,y2=ay2-ay1;
        // int arr1=x1*y1,arr2=x2*y2;
        // int xc1=max(ax1,bx1),xc2=min(ax2,bx2),yc1=max(ay1,by1),yc2=min(ay2,by2);
        // int x3=xc2-xc1,y3=yc2-yc1;
        // if(xc1>xc2)x3=0;
        // if(yc1>yc2)y3=0;
        // int arr3=x3*y3;
        // cout<<arr1<<" "<<arr2<<" "<<arr3;
        // return arr1+arr2-arr3;
        
//         int x = min(G, C) > max(E, A) ? (min(G, C) - max(E, A)) : 0;
//     int y = min(D, H) > max(B, F) ? (min(D, H) - max(B, F)) : 0;
//     return (D - B) * (C - A) + (G - E) * (H - F) - x * y;
        
        int Area1=((ax2-ax1)*(ay2-ay1));
        int Area2=((bx2-bx1)*(by2-by1));
        int Area3;
        int fx1=max(ax1,bx1),fx2=max(ay1,by1),fy1=min(ax2,bx2),fy2=min(ay2,by2);
        int Nx=fy1-fx1,Ny=fy2-fx2;
        if(fx1>fy1)Nx=0;
        if(fx2>fy2)Ny=0;
        Area3=Nx*Ny;
        return Area1+Area2-Area3;
        
        
    }
};