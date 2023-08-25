class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//          vector<int>vect;
//         int m=nums1.size();
//         int n=nums2.size();
//         int i=0,j=0,k=0;
//         int count;
//         if((m+n)%2==0)count=(m+n)/2;
//         else count=(m+n-1)/2;
//         while(i!=m&&j!=n&&k<=count){
//             if(nums1[i]<nums2[j]){
//                 vect.push_back(nums1[i]);
//                 i++;k++;
//             }
//             else{
//                 vect.push_back(nums2[j]);
//                 j++;k++;
//             }
//         }
//         while(i!=m&&k<=count){
//             vect.push_back(nums1[i]);
//             i++;k++;
//         }
//         while(j!=n&&k<=count){
//             vect.push_back(nums2[j]);
//             j++;k++;
//         }
//         double median=0.0;
//         if((m+n)%2==0){
//                       double head=(vect[count]+vect[count-1]);
//                       median=head/2;
//                       }
//         else median=vect[count];
//         return median;
    
//         vector<int>vect;
//         int i=0,j=0,k=0,m=nums1.size(),n=nums2.size();
//         int cnt=(m+n)%2!=0?(m+n)/2:(m+n+1)/2;
//         while(i<m && j<n && k<=cnt){
            
//             if(nums1[i]<nums2[j]){
//                 vect.push_back(nums1[i++]);
//             }
//             else vect.push_back(nums2[j++]);
//             k++;
//         }
        
//         while(i<m && k<=cnt){
//             vect.push_back(nums1[i++]);k++;
//         }
//         while(j<n && k<=cnt){
//             vect.push_back(nums2[j++]);k++;
//         }
        
//         return (m+n)%2==0? ((double)vect[cnt]+vect[cnt-1])/2: vect[cnt];
        
        
        vector<int>vect;
        int m=nums1.size(),n=nums2.size();
        int cnt;
        cnt=((m+n)%2)==0?(m+n+1)/2:(m+n)/2;
        int i=0,j=0,k=0;
        while(i<m && j<n && k<=cnt){
            if(nums1[i]<nums2[j])
                vect.push_back(nums1[i++]);
            else vect.push_back(nums2[j++]);
            k++;
        }
        while(i<m && k<=cnt){
            vect.push_back(nums1[i++]);
            k++;
        }
        while(j<n && k<=cnt){
            vect.push_back(nums2[j++]);
            k++;
        }
        return (m+n)%2==0? ((double)vect[cnt]+vect[cnt-1])/2:vect[cnt];
    }
};